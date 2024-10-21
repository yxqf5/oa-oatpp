#include "SectionController.h"
#include "stdafx.h"

// Î´Íê³É°æ±¾

Uint64JsonVO::Wrapper SectionController::execRemoveSection(const UInt64& id)
{
	auto jvo = Uint64JsonVO::createShared();
	jvo->success();
	return jvo;
}
