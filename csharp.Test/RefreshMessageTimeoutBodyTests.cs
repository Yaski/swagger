using NUnit.Framework;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using IO.Swagger.Api;
using IO.Swagger.Model;
using IO.Swagger.Client;
using System.Reflection;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing RefreshMessageTimeoutBody
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class RefreshMessageTimeoutBodyTests
    {
        private RefreshMessageTimeoutBody instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new RefreshMessageTimeoutBody();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of RefreshMessageTimeoutBody
        /// </summary>
        [Test]
        public void RefreshMessageTimeoutBodyInstanceTest()
        {
            Assert.IsInstanceOf<RefreshMessageTimeoutBody> (instance, "instance is a RefreshMessageTimeoutBody");
        }

        
        /// <summary>
        /// Test the property 'Timeout' 
        /// </summary>
        [Test]
        public void TimeoutTest()
        {
            // TODO: unit test for the property 'Timeout' 
        }
        
        /// <summary>
        /// Test the property 'Key' 
        /// </summary>
        [Test]
        public void KeyTest()
        {
            // TODO: unit test for the property 'Key' 
        }
        

    }

}
