# 0x12. C - Singly linked lists

## Concepts
For this project, we expect you to look at this concept:

[Data Structures](https://intranet.alxswe.com/concepts/120)


# Resources
Read or watch:

[Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)

[Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)

[Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
    When and why using linked lists vs arrays
    How to build and use linked lists

### More Info
Please use this data structure for this project:

        /**
        * struct list_s - singly linked list
        * @str: string - (malloc'ed string)
        * @len: length of the string
        * @next: points to the next node
        *
        * Description: singly linked list node structure
        */
        typedef struct list_s
        {
            char *str;
            unsigned int len;
            struct list_s *next;
        } list_t