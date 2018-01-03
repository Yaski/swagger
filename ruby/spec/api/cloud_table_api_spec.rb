=begin
CloudBoost Application API

Power your web or mobile application backend with cloudboost Database Service

OpenAPI spec version: 1.0.0
Contact: ben@cloudboost.io
Generated by: https://github.com/swagger-api/swagger-codegen.git

License: MIT
http://opensource.org/licenses/MIT

Terms of Service: https://cloudboost.io

=end

require 'spec_helper'
require 'json'

# Unit tests for SwaggerClient::CloudTableApi
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'CloudTableApi' do
  before do
    # run before each test
    @instance = SwaggerClient::CloudTableApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CloudTableApi' do
    it 'should create an instact of CloudTableApi' do
      @instance.should be_a(SwaggerClient::CloudTableApi)
    end
  end

  # unit tests for delete_table
  # 
  # delete a cloud table
  # @param table_name name of cloud table
  # @param app_id cloud app id
  # @param body master key and app id
  # @param [Hash] opts the optional parameters
  # @return [CloudTable]
  describe 'delete_table test' do
    it "should work" do
      # assertion here
      # should be_a()
      # should be_nil
      # should ==
      # should_not ==
    end
  end

  # unit tests for get
  # 
  # get a table
  # @param table_name name of cloud table
  # @param app_id id of app
  # @param body master key and app id
  # @param [Hash] opts the optional parameters
  # @return [CloudTable]
  describe 'get test' do
    it "should work" do
      # assertion here
      # should be_a()
      # should be_nil
      # should ==
      # should_not ==
    end
  end

  # unit tests for get_all
  # 
  # get all tables in app
  # @param app_id app id
  # @param body master key
  # @param [Hash] opts the optional parameters
  # @return [nil]
  describe 'get_all test' do
    it "should work" do
      # assertion here
      # should be_a()
      # should be_nil
      # should ==
      # should_not ==
    end
  end

  # unit tests for save
  # 
  # save a cloud table
  # @param table_name name of cloud table
  # @param app_id cloud app id
  # @param body master key and app id
  # @param [Hash] opts the optional parameters
  # @return [CloudTable]
  describe 'save test' do
    it "should work" do
      # assertion here
      # should be_a()
      # should be_nil
      # should ==
      # should_not ==
    end
  end

end