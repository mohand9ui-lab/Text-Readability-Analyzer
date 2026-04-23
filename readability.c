#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    // 1️⃣ إدخال النص من المستخدم
    string text = get_string("Text: ");

    // 2️⃣ عد الحروف والكلمات والجمل
    int letters = 0;
    int words = 1;  // نبدأ بـ1 لأن آخر كلمة ليس بعدها مسافة
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            letters++;
        }
        else if (isspace(c))
        {
            words++;
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    // 3️⃣ حساب متوسط الحروف والكلمات لكل 100 كلمة
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    // 4️⃣ حساب مؤشر Coleman-Liau
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // 5️⃣ طباعة النتيجة
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
