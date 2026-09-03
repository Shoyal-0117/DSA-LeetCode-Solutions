// 39 ms | 53.6 MB
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World";
    }
};

const f = createHelloWorld();
f(); // "Hello World"
