program eval_fin_session_jeu_du_pendus;

USES crt;

VAR
    mot, base:STRING;
    lettre:CHAR;
    ent,i,j,intru,restant,compteur:INTEGER;

 FUNCTION dessin(compteur:INTEGER) : STRING;//dessin du pendu 

BEGIN
    IF(compteur=1)THEN
    BEGIN
        WRITELN(' ');
        WRITELN(' ');
        WRITELN(' ');
        WRITELN(' ');
        WRITELN('_____ ');
    END
        else if(compteur=2)THEN
            BEGIN
                WRITELN('    ');
                WRITELN('  | ');
                WRITELN('  | ');
                WRITELN('  | ');
                WRITELN('__|__ ');
            END
            else if(compteur = 3)THEN
                BEGIN
                    WRITELN('________');
                    WRITELN('  |     ');
                    WRITELN('  |     ');
                    WRITELN('  |     ');
                    WRITELN('__|__   ');
                END
                else if(compteur = 4)THEN
                    BEGIN
                        WRITELN('________');
                        WRITELN('  |    | ');
                        WRITELN('  |     ');
                        WRITELN('  |     ');
                        WRITELN('__|__   ');
                    END
                    else if(compteur = 5)THEN
                         BEGIN
                            WRITELN('_______');
                            WRITELN('  |   | ');
                            WRITELN('  |   0 ');
                            WRITELN('  |    ');
                            WRITELN('__|__  '); 
                        END
                        else if(compteur = 6)THEN
                            BEGIN
                                WRITELN('_______');
                                WRITELN('  |   | ');
                                WRITELN('  |   0 ');
                                WRITELN('  |   | ');
                                WRITELN('__|__   ');
                            END
                            else if(compteur = 7)THEN
                                BEGIN
                                    WRITELN('_______');
                                    WRITELN('  |   | ');
                                    WRITELN('  |   0 ');
                                    WRITELN('  |  /| ');
                                    WRITELN('__|__   ');
                                END
                            else IF (compteur = 8)THEN
                                BEGIN
                                    WRITELN('_______ ');
                                    WRITELN('  |   | ');
                                    WRITELN('  |   0 ');
                                    WRITELN('  |  /|\');
                                    WRITELN('__|__   ');
                                END
                                else IF(compteur = 9)THEN
                                    BEGIN
                                        WRITELN('_______ ');
                                        WRITELN('  |   |  ');
                                        WRITELN('  |   0  ');
                                        WRITELN('  |  /|\ ');
                                        WRITELN('__|__/  ');
                                END
                                else IF(compteur = 10)then
                                    BEGIN
                                        WRITELN('_______');
                                        WRITELN('  |   | ');
                                        WRITELN('  |   0 ');
                                        WRITELN('  |  /|\');
                                        WRITELN('__|__/ \');
                                    END;
END;
 FUNCTION Question(lettre:CHAR):STRING;//DEMANDER LES LETTRE POUR DEVINER LE MOT
 BEGIN
    REPEAT
    BEGIN
        WRITELN('Saisissez une lettre');
        READLN(lettre);
        clrscr;
        intru := 0;
    FOR j := 1 TO ent DO
    BEGIN
        IF (lettre = mot[j])THEN
        BEGIN
            IF (base[j] = '-')THEN
            BEGIN
                base[j] := lettre;
                intru := intru + 1;
            END;
        END;
        WRITE(base[j]);
    END;
    WRITELN();
    IF (intru = 0)THEN
    BEGIN
        compteur := compteur + 1;
    END;
    WRITELN(dessin(compteur));
END;
    UNTIL (mot = base) OR (compteur = 10);
    if(compteur = 10)then
        BEGIN
            clrscr;
            WRITELN('YOU LOSE');
            READLN();
        END;
    END;
BEGIN //programme principale 
    clrscr;
    compteur:=0;
    WRITELN('Saisissez un mot');
    READLN(mot);
    clrscr;
    ent:=LENGTH(mot);
    restant:=ent;
    base := mot;
    FOR i := 1 TO ent DO
BEGIN
    base[i] := '-';
END;
    WRITELN(base);
    WRITELN(Question(lettre));
    if(compteur < 10)then
        BEGIN
            clrscr;
            WRITELN('YOU WIN');
            READLN;
        END;
END.