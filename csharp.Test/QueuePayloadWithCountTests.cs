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
    ///  Class for testing QueuePayloadWithCount
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class QueuePayloadWithCountTests
    {
        private QueuePayloadWithCount instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new QueuePayloadWithCount();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of QueuePayloadWithCount
        /// </summary>
        [Test]
        public void QueuePayloadWithCountInstanceTest()
        {
            Assert.IsInstanceOf<QueuePayloadWithCount> (instance, "instance is a QueuePayloadWithCount");
        }

        
        /// <summary>
        /// Test the property 'Count' 
        /// </summary>
        [Test]
        public void CountTest()
        {
            // TODO: unit test for the property 'Count' 
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