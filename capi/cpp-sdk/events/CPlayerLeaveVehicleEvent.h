#pragma once

#include "CEvent.h"
#include "../Ref.h"

namespace alt
{
	class IVehicle;
	class IPlayer;

	class CPlayerLeaveVehicleEvent : public CEvent
	{
	public:
		CPlayerLeaveVehicleEvent(Ref<IVehicle> _target, Ref<IPlayer> _player, uint8_t _seat) :
			CEvent(Type::PLAYER_LEAVE_VEHICLE),
			target(_target),
			player(_player),
			seat(_seat)
		{

		}

		Ref<IVehicle> GetTarget() const { return target; }
		Ref<IPlayer> GetPlayer() const { return player; }
		uint8_t GetSeat() const { return seat; }

	private:
		Ref<IVehicle> target;
		Ref<IPlayer> player;
		uint8_t seat;
	};
}