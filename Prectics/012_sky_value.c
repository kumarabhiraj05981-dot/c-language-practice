#include <stdio.h>
int main () {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z') {
        printf("Lowercase\n");
    }
    else if (a >= 'A' && a <= 'Z') {
        printf("Uppercase\n");
    }
    else if (a >= '0' && a <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;   
}   



 /*  ASCII Table — 0 to 127
Dec	Hex	Char	Dec	Hex	Char
0	00	NUL	64	40	@
1	01	SOH	65	41	A
2	02	STX	66	42	B
3	03	ETX	67	43	C
4	04	EOT	68	44	D
5	05	ENQ	69	45	E
6	06	ACK	70	46	F
7	07	BEL	71	47	G
8	08	BS	72	48	H
9	09	TAB	73	49	I
10	0A	LF	74	4A	J
11	0B	VT	75	4B	K
12	0C	FF	76	4C	L
13	0D	CR	77	4D	M
14	0E	SO	78	4E	N
15	0F	SI	79	4F	O
16	10	DLE	80	50	P
17	11	DC1	81	51	Q
18	12	DC2	82	52	R
19	13	DC3	83	53	S
20	14	DC4	84	54	T
21	15	NAK	85	55	U
22	16	SYN	86	56	V
23	17	ETB	87	57	W
24	18	CAN	88	58	X
25	19	EM	89	59	Y
26	1A	SUB	90	5A	Z
27	1B	ESC	91	5B	[
28	1C	FS	92	5C	\
29	1D	GS	93	5D	]
30	1E	RS	94	5E	^
31	1F	US	95	5F	_
32	20	Space	96	60	`
33	21	!	97	61	a
34	22	"	98	62	b
35	23	#	99	63	c
36	24	$	100	64	d
37	25	%	101	65	e
38	26	&	102	66	f
39	27	'	103	67	g
40	28	(	104	68	h
41	29	)	105	69	i
42	2A	*	106	6A	j
43	2B	+	107	6B	k
44	2C	,	108	6C	l
45	2D	-	109	6D	m
46	2E	.	110	6E	n
47	2F	/	111	6F	o
48	30	0	112	70	p
49	31	1	113	71	q
50	32	2	114	72	r
51	33	3	115	73	s
52	34	4	116	74	t
53	35	5	117	75	u
54	36	6	118	76	v
55	37	7	119	77	w
56	38	8	120	78	x
57	39	9	121	79	y
58	3A	:	122	7A	z
59	3B	;	123	7B	{
60	3C	<	124	7C	|
61	3D	=	125	7D	}
62	3E	>	126	7E	~
63	3F	?	127	7F	DEL  */