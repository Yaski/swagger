using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing CloudRoleApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class CloudRoleApiTests
    {
        private CloudRoleApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
           instance = new CloudRoleApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of CloudRoleApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            Assert.IsInstanceOf<CloudRoleApi> (instance, "instance is a CloudRoleApi");
        }

        
        /// <summary>
        /// Test CreateRole
        /// </summary>
        [Test]
        public void CreateRoleTest()
        {
            // TODO: add unit test for the method 'CreateRole'
            string appId = null; // TODO: replace null with proper value
            RoleBody body = null; // TODO: replace null with proper value
            
            var response = instance.CreateRole(appId, body);
            Assert.IsInstanceOf<CloudRole> (response, "response is CloudRole"); 
        }
        
    }

}