#pragma once

#include "../deps/alt-math/alt-math.h"

namespace alt
{
    class IHandlingData : public virtual CRefCountable
    {
    protected:
        virtual ~IHandlingData() = default;

    public:
        virtual uint32_t GetHandlingNameHash() const = 0;
        virtual float GetMass() const = 0;
        virtual float GetInitialDragCoeff() const = 0;
        virtual float GetDownforceModifier() const = 0;
        virtual float GetunkFloat1() const = 0;
        virtual float GetunkFloat2() const = 0;
        virtual Vector3f GetCentreOfMassOffset() const = 0;
        virtual Vector3f GetInertiaMultiplier() const = 0;
        virtual float GetPercentSubmerged() const = 0;
        virtual float GetPercentSubmergedRatio() const = 0;
        virtual float GetDriveBiasFront() const = 0;
        virtual float GetAcceleration() const = 0;
        virtual uint32_t GetInitialDriveGears() const = 0;
        virtual float GetDriveInertia() const = 0;
        virtual float GetClutchChangeRateScaleUpShift() const = 0;
        virtual float GetClutchChangeRateScaleDownShift() const = 0;
        virtual float GetInitialDriveForce() const = 0;
        virtual float GetDriveMaxFlatVel() const = 0;
        virtual float GetInitialDriveMaxFlatVel() const = 0;
        virtual float GetBrakeForce() const = 0;
        virtual float GetunkFloat4() const = 0;
        virtual float GetBrakeBiasFront() const = 0;
        virtual float GetBrakeBiasRear() const = 0;
        virtual float GetHandBrakeForce() const = 0;
        virtual float GetSteeringLock() const = 0;
        virtual float GetSteeringLockRatio() const = 0;
        virtual float GetTractionCurveMax() const = 0;
        virtual float GetTractionCurveMaxRatio() const = 0;
        virtual float GetTractionCurveMin() const = 0;
        virtual float GetTractionCurveMinRatio() const = 0;
        virtual float GetTractionCurveLateral() const = 0;
        virtual float GetTractionCurveLateralRatio() const = 0;
        virtual float GetTractionSpringDeltaMax() const = 0;
        virtual float GetTractionSpringDeltaMaxRatio() const = 0;
        virtual float GetLowSpeedTractionLossMult() const = 0;
        virtual float GetCamberStiffness() const = 0;
        virtual float GetTractionBiasFront() const = 0;
        virtual float GetTractionBiasRear() const = 0;
        virtual float GetTractionLossMult() const = 0;
        virtual float GetSuspensionForce() const = 0;
        virtual float GetSuspensionCompDamp() const = 0;
        virtual float GetSuspensionReboundDamp() const = 0;
        virtual float GetSuspensionUpperLimit() const = 0;
        virtual float GetSuspensionLowerLimit() const = 0;
        virtual float GetSuspensionRaise() const = 0;
        virtual float GetSuspensionBiasFront() const = 0;
        virtual float GetSuspensionBiasRear() const = 0;
        virtual float GetAntiRollBarForce() const = 0;
        virtual float GetAntiRollBarBiasFront() const = 0;
        virtual float GetAntiRollBarBiasRear() const = 0;
        virtual float GetRollCentreHeightFront() const = 0;
        virtual float GetRollCentreHeightRear() const = 0;
        virtual float GetCollisionDamageMult() const = 0;
        virtual float GetWeaponDamageMult() const = 0;
        virtual float GetDeformationDamageMult() const = 0;
        virtual float GetEngineDamageMult() const = 0;
        virtual float GetPetrolTankVolume() const = 0;
        virtual float GetOilVolume() const = 0;
        virtual float GetunkFloat5() const = 0;
        virtual float GetSeatOffsetDistX() const = 0;
        virtual float GetSeatOffsetDistY() const = 0;
        virtual float GetSeatOffsetDistZ() const = 0;
        virtual uint32_t GetMonetaryValue() const = 0;
        virtual uint32_t GetModelFlags() const = 0;
        virtual uint32_t GetHandlingFlags() const = 0;
        virtual uint32_t GetDamageFlags() const = 0;

        virtual void SetMass(float val) = 0;
        virtual void SetInitialDragCoeff(float val) = 0;
        virtual void SetDownforceModifier(float val) = 0;
        virtual void SetunkFloat1(float val) = 0;
        virtual void SetunkFloat2(float val) = 0;
        virtual void SetCentreOfMassOffset(Vector3f val) = 0;
        virtual void SetInertiaMultiplier(Vector3f val) = 0;
        virtual void SetPercentSubmerged(float val) = 0;
        virtual void SetPercentSubmergedRatio(float val) = 0;
        virtual void SetDriveBiasFront(float val) = 0;
        virtual void SetAcceleration(float val) = 0;
        virtual void SetInitialDriveGears(uint32_t val) = 0;
        virtual void SetDriveInertia(float val) = 0;
        virtual void SetClutchChangeRateScaleUpShift(float val) = 0;
        virtual void SetClutchChangeRateScaleDownShift(float val) = 0;
        virtual void SetInitialDriveForce(float val) = 0;
        virtual void SetDriveMaxFlatVel(float val) = 0;
        virtual void SetInitialDriveMaxFlatVel(float val) = 0;
        virtual void SetBrakeForce(float val) = 0;
        virtual void SetunkFloat4(float val) = 0;
        virtual void SetBrakeBiasFront(float val) = 0;
        virtual void SetBrakeBiasRear(float val) = 0;
        virtual void SetHandBrakeForce(float val) = 0;
        virtual void SetSteeringLock(float val) = 0;
        virtual void SetSteeringLockRatio(float val) = 0;
        virtual void SetTractionCurveMax(float val) = 0;
        virtual void SetTractionCurveMaxRatio(float val) = 0;
        virtual void SetTractionCurveMin(float val) = 0;
        virtual void SetTractionCurveMinRatio(float val) = 0;
        virtual void SetTractionCurveLateral(float val) = 0;
        virtual void SetTractionCurveLateralRatio(float val) = 0;
        virtual void SetTractionSpringDeltaMax(float val) = 0;
        virtual void SetTractionSpringDeltaMaxRatio(float val) = 0;
        virtual void SetLowSpeedTractionLossMult(float val) = 0;
        virtual void SetCamberStiffness(float val) = 0;
        virtual void SetTractionBiasFront(float val) = 0;
        virtual void SetTractionBiasRear(float val) = 0;
        virtual void SetTractionLossMult(float val) = 0;
        virtual void SetSuspensionForce(float val) = 0;
        virtual void SetSuspensionCompDamp(float val) = 0;
        virtual void SetSuspensionReboundDamp(float val) = 0;
        virtual void SetSuspensionUpperLimit(float val) = 0;
        virtual void SetSuspensionLowerLimit(float val) = 0;
        virtual void SetSuspensionRaise(float val) = 0;
        virtual void SetSuspensionBiasFront(float val) = 0;
        virtual void SetSuspensionBiasRear(float val) = 0;
        virtual void SetAntiRollBarForce(float val) = 0;
        virtual void SetAntiRollBarBiasFront(float val) = 0;
        virtual void SetAntiRollBarBiasRear(float val) = 0;
        virtual void SetRollCentreHeightFront(float val) = 0;
        virtual void SetRollCentreHeightRear(float val) = 0;
        virtual void SetCollisionDamageMult(float val) = 0;
        virtual void SetWeaponDamageMult(float val) = 0;
        virtual void SetDeformationDamageMult(float val) = 0;
        virtual void SetEngineDamageMult(float val) = 0;
        virtual void SetPetrolTankVolume(float val) = 0;
        virtual void SetOilVolume(float val) = 0;
        virtual void SetunkFloat5(float val) = 0;
        virtual void SetSeatOffsetDistX(float val) = 0;
        virtual void SetSeatOffsetDistY(float val) = 0;
        virtual void SetSeatOffsetDistZ(float val) = 0;
        virtual void SetMonetaryValue(uint32_t val) = 0;
        virtual void SetModelFlags(uint32_t val) = 0;
        virtual void SetHandlingFlags(uint32_t val) = 0;
        virtual void SetDamageFlags(uint32_t val) = 0;

        const std::type_info& GetTypeInfo() const override { return typeid(this); }
    };
} // namespace alt
