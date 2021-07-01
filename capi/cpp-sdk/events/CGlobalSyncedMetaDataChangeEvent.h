#pragma once

#include "../types/StringView.h"
#include "../types/MValue.h"

#include "CEvent.h"

namespace alt
{
	class CGlobalSyncedMetaDataChangeEvent : public CEvent
	{
	public:
		CGlobalSyncedMetaDataChangeEvent(StringView _key, MValueConst _val, MValueConst _oldVal) :
			CEvent(Type::GLOBAL_SYNCED_META_CHANGE),
			key(_key),
			val(_val),
			oldVal(_oldVal)
		{

		}

		StringView GetKey() const { return key; }
		MValueConst GetVal() const { return val; }
		MValueConst GetOldVal() const { return oldVal; }

	private:
		String key;
		MValueConst val;
		MValueConst oldVal;
	};
}
