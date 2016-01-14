int myAtoi(char* str) {
    long ret = 0;
    int sign = 1, i = 0;

    /* skip whitespaces */
    while(isspace(str[i])) {
        i++;}

    /* determine positive or negative */
    if(str[i] == '-') {
        sign = -1;
        i++;}
    else if(str[i] == '+') {
        sign = 1;
        i++;}

    /* make sure first char is in 0-9 */
    if('0' <= str[i] && str[i] <= '9') {
        ret = str[i] - '0';}
    else {
        return 0;}
    i++;

    /* get all numeric chars */
    while('0' <= str[i] && str[i] <= '9') {
        ret *= 10;
        ret += str[i] - '0';
        if(ret > 2147483648) {
             break;}
        i++;}

    /* check overflow */
    ret *= sign;
    if(ret > 2147483647) {
        return 2147483647;}
    if(ret < -2147483648) {
        return -2147483648;}

    /* return */
    return ret;}
 int main(int argc, char const *argv[])
{
    char *str="123    -123456";
    printf("%d\n",myAtoi(str));
    return 0;
}