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
    ///  Class for testing ACL
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class ACLTests
    {
        private ACL instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new ACL();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of ACL
        /// </summary>
        [Test]
        public void ACLInstanceTest()
        {
            Assert.IsInstanceOf<ACL> (instance, "instance is a ACL");
        }

        
        /// <summary>
        /// Test the property 'Read' 
        /// </summary>
        [Test]
        public void ReadTest()
        {
            // TODO: unit test for the property 'Read' 
        }
        
        /// <summary>
        /// Test the property 'Write' 
        /// </summary>
        [Test]
        public void WriteTest()
        {
            // TODO: unit test for the property 'Write' 
        }
        

    }

}
