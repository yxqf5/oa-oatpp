#include "SectionController.h"
#include "stdafx.h"

// δ��ɰ汾

Uint64JsonVO::Wrapper SectionController::execRemoveSection(const UInt64& id)
{
	auto jvo = Uint64JsonVO::createShared();
	jvo->success();
	return jvo;
}
