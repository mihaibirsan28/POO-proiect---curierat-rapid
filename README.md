# POO-proiect---curierat-rapid

Curierat rapid: O firma de curierat are mai multe vehicule in teritoriu (scutere, masini,
dube). Fiecare are o capacitate (o masa maxima admisa si un volum total posibil). Unele
dube sunt frigorifice si pot transporta bunuri reci. Fiecare vehicul se afla intr-un anumit
punct (x,y). Firma (dispeceratul) primeste comenzi de livrare a unor colete (mai multe 
articole cu masa / volum diferite, unele dintre ele putand fi reci) de la un client (aflat la
alte coordonate x,y) catre o destinatie (din nou x,y). Intreg coletul este preluat de un
singur livrator. Soferii se deplaseaza cu viteze diferite (scutere – 20 Km/s, masini – 10
Km/s, dube – 5 Km/s) catre destinatie, in linie dreapta (scutere) sau manhattan (masini,
dube). Odata livrat un colet, un vehiculul ramane la destinatie daca nu mai are alte
colete de livrat. Coletele trebuie sa ajunga „la timp”. Pentru diferite colete la timp poate
insemna: pana la o anumita secunda din zi, intr-un interval de timp maxim (de la
preluarea comenzii/preluarea coletului), cat mai repede (fara limita de timp). Firma
poate aplica 3 strategii de alocare a coletelor (e.g. vehiculul cel mai apropiat de client,
vehiculul care – conform strategiei sale curente – poate livra cel mai repede coletul,
vehiculul cel mai putin incarcat). Vehiculele se aleg dintre cele capabile sa transporte
coletul (au spatiu) si ar reusi conform strategiei curente sa il livreze la timp. Daca nu
exista nici un astfel de vehicul, clientul este refuzat. De asemenea, soferul vehiculului
poate opta pentru 3 strategii de livrare/ridicare (coletul cel mai urgent primul, coletul
cel mai apropiat de pozitia curenta, first-come-first-served). Sa se simuleze operatiunile
firmei de curierat intr-o zi.
Precizari:

 Un vehicul nu isi schimba destinatia pe parcursul unui drum (doar in
momentele in care ridica/livreaza un colet).
 Strategia soferului poate trata unitar (la fel) ambele tipuri de operatiuni
(ridicare si livrare) sau poate sa faca distinctie intre ele (e.g. mai intai
livrari apoi ridicari).
 Strategiile de alocare pot fi schimbate de manager pe parcursul unei zile.
La fel si strategiile fiecarui sofer (tot de manager) – insa fara ca un colet
sa ajunga sa nu mai poata fi livrat la timp.
 Performanta algoritmului de alocare nu este cruciala pentru aceasta
cerinta la acest curs.

Nu am reusit sa implimentez o metodele de alegere a vehiculului care ridica comanda, sau a strategiei de livrare a fiecarui sofer.
