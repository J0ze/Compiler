function myTest() {
    let a = 1;
    if (a > 0) {
      a = a + (10 * 2); // a 现在是 21
    }
    for (let i = 0; i < 3; i++) {
        if (i == 1) {
            break; // 只有 i=0 会执行 (a 变为 20)
        }
        a = a - 1;
    }
    // a 在这里应该是 20
    ++a; // a 变为 21
    // <-- 新添加的 do-while 循环 -->
    do {
        a = a + 1; // a 变为 22
    } while (a < 22);
    // a 在这里应该是 22
    let b = this.a;      // 测试: object.property (computed: false)
    let c = this[a];     // 测试: object[expression] (computed: true)
    let obj = {
    a: 1,
    "b": a,
    10: c
    };
    let arr = [1, a, obj, []];
    let anonFn = function(x, y) { return x + y; };
    let namedFn = function myInnerFn(x) { return x; };
    let fn1 = a => a + 1;
    let fn2 = (a, b) => a + b;
    let fn3 = () => { return 42; };
    // <-- 新添加的 switch 语句 -->
    switch (a) {
        case 10:
            a = 100;
            break;
        case 21:
            a = 50;
            break;
        default:
            a = 0;
    }

    try {
        a = a + 1; // a 变为 51
    } catch (err) {
        throw err;
    } finally {
        a = a + 10; // a 变为 61
    }
    return a > 40 ? 1 : 0;
}
let d = new myTest();
myTest();
class Person {
    constructor(name) {
        this.name = name;
    }
    greet() {
        return "Hello";
    }
    static staticGreet() {
        return "Static Hello";
    }
}
let p = new Person("Alice");
Person.staticGreet();
class Employee extends Person {
    constructor(name, title) {
        super(name); // <-- 在此调用 super()
        this.title = title;
    }

    greetEmployee() {
        return super.greet() + "employee";
    }
}

let e = new Employee("Bob", "Manager");