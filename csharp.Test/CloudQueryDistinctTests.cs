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
    ///  Class for testing CloudQueryDistinct
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class CloudQueryDistinctTests
    {
        private CloudQueryDistinct instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new CloudQueryDistinct();
        }
    
        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }   

        /// <summary>
        /// Test an instance of CloudQueryDistinct
        /// </summary>
        [Test]
        public void CloudQueryDistinctInstanceTest()
        {
            Assert.IsInstanceOf<CloudQueryDistinct> (instance, "instance is a CloudQueryDistinct");
        }

        
        /// <summary>
        /// Test the property 'Key' 
        /// </summary>
        [Test]
        public void KeyTest()
        {
            // TODO: unit test for the property 'Key' 
        }
        
        /// <summary>
        /// Test the property 'Skip' 
        /// </summary>
        [Test]
        public void SkipTest()
        {
            // TODO: unit test for the property 'Skip' 
        }
        
        /// <summary>
        /// Test the property 'Limit' 
        /// </summary>
        [Test]
        public void LimitTest()
        {
            // TODO: unit test for the property 'Limit' 
        }
        
        /// <summary>
        /// Test the property 'Query' 
        /// </summary>
        [Test]
        public void QueryTest()
        {
            // TODO: unit test for the property 'Query' 
        }
        
        /// <summary>
        /// Test the property 'Sort' 
        /// </summary>
        [Test]
        public void SortTest()
        {
            // TODO: unit test for the property 'Sort' 
        }
        
        /// <summary>
        /// Test the property 'Select' 
        /// </summary>
        [Test]
        public void SelectTest()
        {
            // TODO: unit test for the property 'Select' 
        }
        
        /// <summary>
        /// Test the property 'OnKey' 
        /// </summary>
        [Test]
        public void OnKeyTest()
        {
            // TODO: unit test for the property 'OnKey' 
        }
        

    }

}
