namespace eMCExample061120
{
    using Mastercam.App;
    using Mastercam.App.Types;

    using OperationServiceNative;

    public class Main : NetHook3App
    {
        #region Public Override Methods

        public override MCamReturn Run(int param)
        {
            var opService = new OperationService();

            var opDataReturn = (OperationData)opService.GetOperationData(1);

            var opDataReference = new OperationData();

            opService.GetOperationData(1, ref opDataReference);

            var newOpData = new OperationData()
            {
                Comment = "A new op",
                ID = 2,
                Type = 1,
                ToolNumber = 1
            };

            var isSuccess = opService.CreateOperation(ref newOpData);

            return MCamReturn.NoErrors;
        }

        #endregion
    }
}
