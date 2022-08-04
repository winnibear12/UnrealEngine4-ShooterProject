// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "AmmoType.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun UMETA(DisplayName = "SubmachineGun"),
	EWT_AssultRifle UMETA(DisplayName = "AssultRifle"),
	
	EWT_MAX UMETA(DisplayName = "DefaultMAX")

};

/**
 * 
 */
UCLASS()
class SHOOTERPROJ1_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	AWeapon();

	virtual void Tick(float DeltaTime) override;

protected:
	void StopFalling();

private:
	FTimerHandle ThrowWeaponTimer;
	float ThrowWeaponTime;
	bool bFalling;

	// Ammo count for this Weapon
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	int32 Ammo;

	// Maximum ammo tha our weapon can hold
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	int32 MagazineCapacity;

	// The type of the weapon
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	EWeaponType WeaponType;

	//Type of Ammo for this weapon
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	EAmmoType AmmoType;

	//FName for the Reload Montage Section
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	FName ReloadMontageSection;

	// True when moving the clip while reloading
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	bool bMovingClip;

	// Name for the clip bone
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	FName ClipBoneName;

	// Amount of damage caused by a bullet
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	float Damage;

	// Amount of damage when a bullet hits the head
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon Properties",meta=(AllowPrivateAccess = "ture"))
	float HeadShotDamage;
public:
	// Adds an impulse to the weapon
	void ThrowWeapon();

	FORCEINLINE int32 GetAmmo() const{ return Ammo;}
	FORCEINLINE int32 GetMagazineCapacity() const {return MagazineCapacity;}
	// Called from Character class when firing Weapon
	void DecrementAmmo();

	FORCEINLINE EWeaponType GetWeaponType() const {return WeaponType;}
	FORCEINLINE EAmmoType GetAmmoType() const {return AmmoType;}
	FORCEINLINE FName GetReloadMontageSection() const {return ReloadMontageSection;}
	FORCEINLINE FName GetClipBoneName() const {return ClipBoneName;}
	FORCEINLINE float GetDamage() const {return Damage;}
	FORCEINLINE float GetHeadShotDamage() const {return HeadShotDamage;}

	void ReloadAmmo(int32 Amount);

	FORCEINLINE void SetMovingClip(bool Move) {bMovingClip  = Move;}
};
