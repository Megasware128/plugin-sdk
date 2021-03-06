#pragma once
#include "plbase/PluginBase.h"
#include "CAtomicModelInfo.h"

class PLUGIN_API CTimeModelInfo : public CAtomicModelInfo {
public:
	tTimeInfo m_timeInfo;

	void FindOtherTimeModel(char *modelName);
};

VALIDATE_SIZE(CTimeModelInfo, 0x24);