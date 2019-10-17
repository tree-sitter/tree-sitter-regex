"(" @punctuation.bracket
")" @punctuation.bracket
"(?" @punctuation.bracket
"(?:" @punctuation.bracket
"(?<" @punctuation.bracket
">" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(group_name) @property

(identity_escape) @escape
(control_letter_escape) @escape
(character_class_escape) @escape
(control_escape) @escape
(start_assertion) @escape
(end_assertion) @escape
(boundary_assertion) @escape
(non_boundary_assertion) @escape

"*" @operator
"+" @operator
"|" @operator
"=" @operator
"<=" @operator
"!" @operator
"<!" @operator
