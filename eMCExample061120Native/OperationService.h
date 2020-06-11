#pragma once

namespace OperationServiceNative
{
	public value struct OperationData
	{
		System::String ^ Comment;
		int Type;
		int ID;
		int ToolNumber;
	};

	public ref class OperationService
	{
	public:
		OperationService();

		OperationData ^ GetOperationData(int opID);
		void GetOperationData(int opID, OperationData % opData);
		bool CreateOperation(OperationData % opdata);

		~OperationService();

	};

}
