void ft_swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    tmp = *b;



}
int	ft_strcmp(char *s1, char *s2){

    unsigned int i;
    while(s1[i] == s2[i] && s1[1] != '\0' && s2[i] != '\0')
    {

        i++;

    }
    return(s1[i] - s2[i]);


}
void	ft_sort_string_tab(char **tab){

    int index;
    int i;
    i = 0;
    while(tab[i]){

        tab = 0;
        while(tab[index]){

            if(tab[index + 1] && ft_strcmp(tab[index], tab[index + 1] > 0))
            ft_swap(&tab[index], &tab[index+1]);
            index++;
        }
        i++;
        
    }
}