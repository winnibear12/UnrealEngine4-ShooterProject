// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "AmmoType.h"
#include "Ammo.generated.h"



/**
 * 
 */
UCLASS()
class SHOOTERPROJ1_API AAmmo : public AItem
{
	GENERATED_BODY()

public:
	AAmmo();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	// Override of SetItemProperties so we can set AmmoMesh properties
	virtual void SetItemProperties(EItemState State) override;
	

	//called when overlapping AreaSphere
	UFUNCTION()
	void AmmoSphereOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);



private:

	// Mesh for the ammo pickup
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category=Ammo, meta=(AllowPrivateAccess = "ture"))
	UStaticMeshComponent* AmmoMesh;

	//Ammo Type for the ammo
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Ammo, meta=(AllowPrivateAccess = "ture"))
	EAmmoType AmmoType;

	//Texture for the AmmoIcon
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Ammo, meta=(AllowPrivateAccess = "ture"))
	UTexture2D* AmmoIconTexture;

	// Overlap sphere for picking up the Ammo
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Ammo, meta=(AllowPrivateAccess = "ture"))
	class USphereComponent* AmmoCollisionSphere;

public:
	FORCEINLINE UStaticMeshComponent* GetAmmoMesh() const {return AmmoMesh;}
	FORCEINLINE EAmmoType GetAmmoType() const {return AmmoType;}
	
};
