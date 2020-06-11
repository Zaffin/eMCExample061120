#include "pch.h"

#include "OperationService.h"

void OperationServiceNative::OperationService::GetOperationData(int opID, OperationData % opData)
{
	auto operation = TpMainOpMgr.GetMainOpList().OpByID(opID);

	if (operation != nullptr)
	{
		System::String^ commentString = gcnew System::String(operation->comment);

		opData.Comment = commentString;
		opData.ID = operation->op_idn;
		opData.Type = operation->opcode;
		opData.ToolNumber = operation->tl.tlno;
	}
}

OperationServiceNative::OperationService::OperationService()
{
}

OperationServiceNative::OperationData ^ OperationServiceNative::OperationService::GetOperationData(int opID)
{
	OperationData ^ opData = nullptr;

	auto operation = TpMainOpMgr.GetMainOpList().OpByID(opID);

	if (operation != nullptr)
	{
		opData = gcnew OperationData();

		System::String^ commentString = gcnew System::String(operation->comment);

		opData->Comment = commentString;
		opData->ID = operation->op_idn;
		opData->Type = operation->opcode;
		opData->ToolNumber = operation->tl.tlno;
	}

	return opData;
}

bool OperationServiceNative::OperationService::CreateOperation(OperationData % opdata)
{
	//Code to create an operation with the OperationData struct

	return false;
}

OperationServiceNative::OperationService::~OperationService()
{
}
