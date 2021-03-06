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
    ///  Class for testing QueueMessage
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class QueueMessageTests
    {
        private QueueMessage instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new QueueMessage();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of QueueMessage
        /// </summary>
        [Test]
        public void QueueMessageInstanceTest()
        {
            Assert.IsInstanceOf<QueueMessage> (instance, "instance is a QueueMessage");
        }

        
        /// <summary>
        /// Test the property 'ACL' 
        /// </summary>
        [Test]
        public void ACLTest()
        {
            // TODO: unit test for the property 'ACL' 
        }
        
        /// <summary>
        /// Test the property 'Type' 
        /// </summary>
        [Test]
        public void TypeTest()
        {
            // TODO: unit test for the property 'Type' 
        }
        
        /// <summary>
        /// Test the property 'Expires' 
        /// </summary>
        [Test]
        public void ExpiresTest()
        {
            // TODO: unit test for the property 'Expires' 
        }
        
        /// <summary>
        /// Test the property 'Id' 
        /// </summary>
        [Test]
        public void IdTest()
        {
            // TODO: unit test for the property 'Id' 
        }
        
        /// <summary>
        /// Test the property 'Delay' 
        /// </summary>
        [Test]
        public void DelayTest()
        {
            // TODO: unit test for the property 'Delay' 
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
        /// Test the property 'ModifiedColumns' 
        /// </summary>
        [Test]
        public void ModifiedColumnsTest()
        {
            // TODO: unit test for the property 'ModifiedColumns' 
        }
        
        /// <summary>
        /// Test the property 'IsModified' 
        /// </summary>
        [Test]
        public void IsModifiedTest()
        {
            // TODO: unit test for the property 'IsModified' 
        }
        
        /// <summary>
        /// Test the property 'Message' 
        /// </summary>
        [Test]
        public void MessageTest()
        {
            // TODO: unit test for the property 'Message' 
        }
        

    }

}
