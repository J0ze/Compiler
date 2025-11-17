let a = 1;

for (let i = 0; i < 3; i++) {
    if (i == 1) {
        break;
    }
    a = a - 1;
}

do {
    a = a + 1;
} while (a < 22);