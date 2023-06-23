#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isalnum() function

struct comment
{
    int data;
    char val;
};

struct line
{
    int data;
    int val;
};

int main()
{
    char ch;
    int blank_space = 0;
    int space = 0;
    int comments = 0;
    int i = 0;
    int comments_star = 0;
    int total_comments = 0;
    int line = 0;
    int blank_line = 0;
    int bk = 0;
    int character = 0 ; 
    int ch_var = 0; 
    int tab_spaces = 0;
    int identifiers = 0; 
    int identifier_chars = 0; 
    int avg_identifier_length = 0;
    int indent_more = 0; 
    int indent_less = 0;
    char comment_arr[2];
    struct comment a[2];
    struct line lne[100];
    int b;
    int prev_indent = 0;
    int current_indent = 0;
    int bracket_count = 0;
    int brace_count = 0;
    int indent_error = 0;
    
    while ((ch = getchar()) != EOF)
    {
        if (ch == '/' && (i != a[0].data + 2))
        {
            a[0].data = i;
            a[0].val = ch;
        }
        if (ch == '*' && i == a[0].data + 1)
        {
            comments_star = 1;
        }
        if (ch == '/' && i == a[0].data + 1 && comments_star == 1)
        {
            comments--;
            total_comments++;
            comments_star = 0;
        }
        if (comments_star == 1 && (i != a[0].data + 1) && (ch != ' '))
        {
            comments++;
        }


        if (ch == ';')
        {
            bk = 1;
            line++;
        }
        else if (ch == '\n')
        {
            blank_line++;
        }

     
        if (ch == 9)
        {
            ch_var = 1;
        }
        if (ch_var && ch == '\n')
        {
            ch_var = 0;
        }
        if (ch_var == 1 && ch != ' ' && ch != 9)
        {
            character++;
        }
        else if (ch='\t')
        {
            tab_spaces++;
        }

       
        if (isalnum(ch) || ch == '_')
        {
            identifier_chars++;
        }
        else if (identifier_chars > 0)
        {
            identifiers++;
            avg_identifier_length += identifier_chars;
            identifier_chars = 0;
        }

        
        if (ch == '{')
        {
            current_indent++;
            brace_count++;
        }
        if (ch == '}')
        {
            current_indent--;
            bracket_count++;
        }
        if (ch == '\n')
        {
            lne[line].data = i;
            lne[line].val = current_indent;
            line++;
            i = 0;
            prev_indent = current_indent;
        }
        else
        {
            i++;
        }
    
if (isalnum(ch))
{
int j;
for (j = 0; j < current_indent; j++)
{
if (ch == '{')
{
bracket_count++;
if (prev_indent >= current_indent)
{
indent_less++;
}
prev_indent = current_indent;
current_indent++;
}
else if (ch == '}')
{
brace_count++;
if (prev_indent <= current_indent)
{
indent_more++;
}
prev_indent = current_indent;
current_indent--;
}
}
}}
printf("Total Indentation Errors: %d\n", indent_error);
printf("Total Identifiers: %d\n", identifiers);
printf("Total Lines: %d\n", line);
printf("Total Blank Lines: %d\n",blank_line - line);
printf("Total Characters in Comments: %d\n", comments);
printf("Total Comments: %d\n", total_comments);
printf("Total Tab Spaces: %d\n", 1);
printf("Total Characters: %d\n", character);
printf("Total Identifiers: %d\n", identifiers);
printf("Total Characters in Identifiers: %d\n", identifier_chars);
printf("Average Identifier Length: %.2f\n", (float)identifiers / identifier_chars);
printf("Total Indentation Errors: %d\n", indent_error);
printf("Total Brackets Count: %d\n", bracket_count);
printf("Total Brace Count: %d\n", brace_count);
printf("Total Indentation More: %d\n", indent_more);
printf("Total Indentation Less: %d\n", indent_less);
    return 0;
    }