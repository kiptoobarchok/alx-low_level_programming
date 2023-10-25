# 0x13. C - More singly linked lists

## Resources
Read or watch:

[Google](https://intranet.alxswe.com/rltoken/2-7-eVuWcPutbXf6YZZgiA)

[Youtube](https://intranet.alxswe.com/rltoken/wVWwl86ufLMsXeAigpxllg)

# Learning Objectives
## General
    How to use linked lists
    Start to look for the right source of information without too much help


# More Info
Please use this data structure for this project:

        /**
        * struct listint_s - singly linked list
        * @n: integer
        * @next: points to the next node
        *
        * Description: singly linked list node structure
        * 
        */
        typedef struct listint_s
        {
            int n;
            struct listint_s *next;
        } listint_t;
