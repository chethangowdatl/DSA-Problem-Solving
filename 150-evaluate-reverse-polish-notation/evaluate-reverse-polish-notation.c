int evalRPN(char** str, int n) {

    int stack[10000];
    int top = -1;
    int result, a, b;

    for (int i = 0; i < n; i++) {
        if(isdigit(str[i][0]) || (str[i][0]=='-') && isdigit(str[i][1]))
        stack[++top]=atoi(str[i]);
        else {
            b = stack[top--];
            a = stack[top--];

            switch (str[i][0]) {

                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;
            }

            stack[++top] = result;
        }
    }

    return stack[top];
}