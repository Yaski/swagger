var swaggerTest=require('swagger-test');
var fs=require('fs');
var preq=require('preq');
var assert = require('chai').assert;
var buffer=fs.readFileSync('cloudboost-spec.json');
var swaggerSpec=JSON.parse(buffer);
var xamples=swaggerTest.parse(swaggerSpec);


describe('RESTFUL TESTS:',
function(){
  xamples.forEach(function(xample){
    it(xample.description,
    function(){
      this.timeout(10000);
     return preq[xample.request.method](xample.request).then(function(response){
        assert.equal(response.status,xample.response.status,'wrong response received');
      });
    });
  });
});

