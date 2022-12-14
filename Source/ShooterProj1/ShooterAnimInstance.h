// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERPROJ1_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UShooterAnimInstance();
	
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

	virtual void NativeInitializeAnimation() override;
	


protected:

	// Handle turning in place variables
	void TurnInPlace();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	class AShooterCharacter* ShooterCharacter;

	//Speed of the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	float Speed;

	//check if the character is in the air
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	bool bIsInAir;

	//check if the character is moving	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	bool bIsAccelerating;

	//offset yaw used for strafing
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	float MovementOffsetYaw;

	/** Offset yaw the frame before we stopped moving */
    	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
    	float LastMovementOffsetYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category=Movement,meta = (AllowPrivateAccess = "ture"))
	bool bAiming;

	//Yaw of the Character this frame
	float CharacterYaw;

	//Yaw of the Character the previous frame
	float CharacterYawLastFrame;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="Turn in Place", meta=(AllowPrivateAccess = "true"))
	float RootYawOffset;

	// Rotation curve valve this frame
	float RotationCurve;

	// Rotation curve value last frame
	float RotationCurveValueLastFrame;
};
