// 49 ms | 52.8 MB
/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    return {
        toBe: function (other_value) {
            if (val === other_value) return true
            else throw new Error("Not Equal");
        },
        notToBe: function (other_value) {
            if (val !== other_value) return true
            else throw new Error("Equal");
        }
    };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */