#include <stdio.h>

#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ON 1
#define OFF 0

struct font_display
{
    unsigned int font_id    : 8;
    unsigned int font_size  : 7;
    unsigned int aligment   : 2;
    unsigned int bold       : 1;
    unsigned int italic     : 1;
    unsigned int underline  : 1;
};

char show(void);
void show_struct(struct font_display *);
void change_font(struct font_display *);
void change_size(struct font_display *);
void change_aligment(struct font_display *);

int main(void)
{
    struct font_display font = {1, 12, LEFT, OFF, OFF, OFF};
    char opt;

    show_struct(&font);
    while((opt = show()) != 'q')
    {
        if(opt == 'f')
            change_font(&font);
        else if(opt == 's')
            change_size(&font);
        else if(opt == 'a')
            change_aligment(&font);
        else if(opt == 'b')
            font.bold = ~(font.bold);
        else if(opt == 'i')
            font.italic = ~(font.italic);
        else if(opt == 'u')
            font.underline = ~(font.underline);

        printf("\n\n");

        show_struct(&font);
    }

    return 0;
}

void change_font(struct font_display *font)
{
    int mask = 0xff;
    unsigned int id;

    printf("Enter a font id: ");
    scanf("%u", &id);
    getchar();
    font->font_id = id & mask;
}

void change_size(struct font_display *font)
{
    int mask = 0x7f;
    unsigned int size;

    printf("Enter a size: ");
    scanf("%u", &size);
    getchar();
    font->font_size = size & mask;
}

void change_aligment(struct font_display *font)
{
    char opt;

    printf("Select alignment: \n");
    printf("l)left  c)center  r)right\n");
    scanf("%c", &opt);
    getchar();

    int alignment;

    if(opt == 'l')
        alignment = LEFT;
    else if(opt == 'c')
        alignment = CENTER;
    else if(opt == 'r')
        alignment = RIGHT;
    else
    {
        printf("Error selection.\n");
        return;
    }

    font->aligment = alignment;
}

char show(void)
{
    char opt;

    printf("f) change font    s) change size    a) change alignment\n");
    printf("b) toggle bold    i) toggle italic  u) toggle underline\n");
    printf("q) quit\n");

    opt = getchar();
    getchar();

    return opt;
}

void show_struct(struct font_display *font)
{
    printf("ID SIZE ALIGNMENT B I U\n");
    /*char a[] = {(font->aligment == LEFT ? "left" : (font->aligment == CENTER ? "center" : "right"))};
    char b[] = {(font->bold == ON ? "on" : "off")};
    char i[] = {font->italic == ON ? "on" : "off"};
    char u[] = {font->underline == ON ? "on" : "off"};*/

    printf("%d   %d   %s ", font->font_id, font->font_size, font->aligment == LEFT ? "left" : (font->aligment == CENTER ? "center" : "right"));
    printf("%s %s ", font->bold == ON ? "on" : "off", font->italic == ON ? "on" : "off");
    printf("%s\n", font->underline == ON ? "on" : "off");
}
