// --------------------------------------------------------------------------------------------------------------------
// <copyright file="Main.cs" company="CNC Software, Inc.">
//   Copyright (c) 2017 CNC Software, Inc.
// </copyright>
// <summary>
//  If this project is helpful please take a short survey at ->
//  http://ux.mastercam.com/Surveys/APISDKSupport 
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace eMCExample061120
{
    using Mastercam.App;
    using Mastercam.App.Types;

    using eMCExample061120.Views;

    public class Main : NetHook3App
    {
        #region Public Override Methods

        /// <summary>
        /// The main entry point for your NETHook.
        /// </summary>
        /// <param name="param">System parameter.</param>
        /// <returns>A <c>MCamReturn</c> return type representing the outcome of your NetHook application.</returns>
        public override MCamReturn Run(int param)
        {
            using (var view = new MainView())
            {
                view.ShowDialog();
            }

            return MCamReturn.NoErrors;
        }

        #endregion
    }
}
