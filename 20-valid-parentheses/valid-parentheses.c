char stack[10000];
int top;

void push(char value){
    if (top == 9999){
        return;
    }
    stack[++top] = value;

}
char pop(){
    if (top == -1){
        return '\0';
    }
    return stack[top--];
}

bool isValid(char* s) {
    top = - 1;

    for (int i = 0; s[i]!='\0';i++){
        if (s[i]=='(' || s[i] == '[' || s[i]=='{'){
            push(s[i]);
        }
        else{
            char elem=pop();
            if (elem=='\0'){
                return false;
            }
            if (elem=='(' && s[i] != ')' || elem=='[' && s[i] != ']' || elem=='{' && s[i] != '}'){
                return false;
            }
        }
    }
    return top==-1;
}