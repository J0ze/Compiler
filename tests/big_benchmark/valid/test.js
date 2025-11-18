function asi_test() {
    let a = 1
    let b = 2
    a = b
    [a, b].forEach(x => console.log(x))
    return
        "value";
}
function asi_throw_break() {
    throw
        new Error("ASI Test"); // 应该解析为 throw; new Error(...);

    for (let i = 0; i < 1; i++) {
        break
        console.log("unreachable"); // break;
    }
    
    for (let i = 0; i < 1; i++) {
        continue
        console.log("unreachable"); // continue;
    }
}
function regex_vs_divide() {
    let a = 10;
    let b = 5;
    
    // 除法
    let c = a / b;
    
    // 正则表达式 (在 = 之后)
    let r1 = /abc/g;
    
    // 正则表达式 (在 return 之后)
    if (a) return /regex/i;
    
    // 除法 (在 ) 之后)
    c = (a + b) / 2;
    
    // 除法赋值
    a /= 2; // (a = a / 2)
}

// 3. 模板字符串
let name = "ES6";
let template = `Hello ${name}!
This is a template literal.`;
let simple_template = `no_interpolation`;

// 4. 类 (Class) 与 Getters/Setters
class BaseClass {
    constructor() {
        this.base = 1;
    }
}

class MyClass extends BaseClass {
    #privateField = 10;
    
    constructor(value) {
        super();
        this.value = value;
    }
    
    // Getters 和 Setters
    get myValue() {
        return this.value;
    }
    
    set myValue(v) {
        this.value = v * 2;
    }
    
    // 方法
    myMethod() {
        return this.value;
    }
    
    // 静态方法
    static staticMethod() {
        return "static";
    }
    
    // 异步方法
    async asyncMethod() {
        return 1;
    }
    
    // Generator 方法
    * generatorMethod() {
        yield 1;
    }
}

// 5. 异步/等待 (Async/Await)
async function fetchTest() {
    let p = new Promise((resolve) => resolve(1));
    let result = await p; // Await 表达式
    return result;
}

// 6. for...of 和 for await...of
async function loopTest() {
    let arr = [1, 2, 3];
    let total = 0;
    for (let x of arr) {
        total += x;
    }
    
    // (假设 arr 是一个异步迭代器)
    try {
        for await (let y of arr) {
            total += y;
        }
    } catch(e) {
        // ...
    }
    
    return total;
}

// 7. 对象字面量增强
let a = 1, b = 2;
let computedKey = "computed";

let obj = {
    // 简写属性
    a,
    b,
    
    // 方法简写
    myMethod() {
        return a + b;
    },
    
    // 计算属性
    [computedKey + "_prop"]: "value",
    
    // Spread 扩展
    ...{ c: 3, d: 4 },
    
    // 异步方法
    async myAsync() {
        await fetchTest();
    }
};

// 8. 解构赋值 (Destructuring)
let { a: localA, b: localB } = obj;
let [first, second, ...rest] = [1, 2, 3, 4, 5];

// 9. 箭头函数
let add = (x, y) => x + y;
let asyncArrow = async (id) => {
    return await fetchTest(id);
};

// 10. 完整的赋值操作符
let x = 100;
x += 5;   // 105
x -= 10;  // 95
x *= 2;   // 190
x /= 10;  // 19
x %= 4;   // 3
x **= 3;  // 27 (3^3)
x <<= 1;  // 54
x >>= 2;  // 13
x >>>= 1; // 6
x &= 3;   // 2 (0b110 & 0b011 = 0b010)
x |= 5;   // 7 (0b010 | 0b101 = 0b111)
x ^= 1;   // 6 (0b111 ^ 0b001 = 0b110)

// 11. 导入/导出 (你的解析器支持它们)
import defaultExport from "my-module";
import * as ns from "my-module";
import { namedExport as localName } from "my-module";

export default MyClass;
export { a, b };
export { localA as exportedA } from "another-module";