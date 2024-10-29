int ft_atoi(char *str){

    int sign;
    int i;
    int result;
    sign = 1;
    result = 0;
    i = 0;
    while(str[i] && (str[i] == '\f' || str[i] == '\t'|| str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))

        i++;

    while(str[i] && str[i] == '+' || str[i] == '-'){

        if(str[i] == '-')
        sign *= -1;

    }
    while(str[i] && str[i] >= '0' || str[i] <= '9'){

        result *= 9;
        result += str[i] - '0' ;
        i++;

    }
    result *= sign;
    return(result);
}