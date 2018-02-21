static int String_Look(var self, var input, int pos) {
       String_Clear(self);
       var chr = $I(0);
       pos = scan_from(input, pos, "%c", chr);
       if (c_int(chr) isnt '\"') {
                throw(FormatError,       "String literal does not start with quotation marks!");
        }
        while (true) {
                    pos = scan_from(input, pos, "%c", chr);
            if (c_int(chr) == '"') {
                            break;
            }
            if (c_int(chr) == '\\') {
                    pos = scan_from(input, pos, "%c", chr);
                    switch (c_int(chr)) {
                        case 'a':  String_Concat(self, $S("\a"));
                        break;
                        case 'b':  String_Concat(self, $S("\b"));
                        break;
                        case 'f':  String_Concat(self, $S("\f"));
                        break;
                        case 'n':  String_Concat(self, $S("\n"));
                        break;
                        case 'r':  String_Concat(self, $S("\r"));
                        break;
                        case 't':  String_Concat(self, $S("\t"));
                        break;
                        case 'v':  String_Concat(self, $S("\v"));
                        break;
                        case '\\': String_Concat(self, $S("\\"));
                        break;
                        case '\'': String_Concat(self, $S("\'"));
                        break;
                        case '"':  String_Concat(self, $S("\""));
                        break;
                        case '?':  String_Concat(self, $S("\?"));
                        break;
                        default: throw(FormatError, "Unknown Escape Sequence '\\%c'!", chr);
                    }
            }
            char buffer[2];
            buffer[0] = (char)c_int(chr);
            buffer[1] = '\0';
            String_Concat(self, $S(buffer));
        }
    return pos;
}
