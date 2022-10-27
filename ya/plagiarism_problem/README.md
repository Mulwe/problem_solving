# YA encoding problem

First line is an original message. Second line is an another message.

Both lines are compared for plagiarism and had the same size and contain only uppercase letters (`'A'` - `'Z'`);

Сheck every character of the second line for plagiarism. Output the result, for every character:

`P` - plagiarism, only if characters equal;

`S` - suspicion, if one of the characters has already been compared, but `(*)`

`I` - innocence, other cases;

`(*)` `P` and `S` can used only once for one kind of character.

Example. Input:
`
  AZZZZZZZ
  AZZZZAAA
  PPSIIISI
`
Output:
`
  PPSIIISI
`
