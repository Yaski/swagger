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
    ///  Class for testing BoolFilter
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class BoolFilterTests
    {
        private BoolFilter instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new BoolFilter();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of BoolFilter
        /// </summary>
        [Test]
        public void BoolFilterInstanceTest()
        {
            Assert.IsInstanceOf<BoolFilter> (instance, "instance is a BoolFilter");
        }

        
        /// <summary>
        /// Test the property '_Bool' 
        /// </summary>
        [Test]
        public void _BoolTest()
        {
            // TODO: unit test for the property '_Bool' 
        }
        

    }

}
