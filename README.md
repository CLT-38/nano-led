# nano-led

URL / addresse : [https://github.com/CLT-38/nano-led/](https://github.com/CLT-38/nano-led/)

<img width="300" height="300" alt="frame" src="https://github.com/user-attachments/assets/faddc5f8-06ea-4d17-baec-a404bd312ccc" />

## Introduction à la Nano

### Qu'est-ce que l'Arduino ?

Plateforme électronique open-source basée sur des cartes de microcontrôleur faciles à utiliser et un environnement de développement intégré (IDE).

Permet aux débutants et aux professionnels de créer des projets interactifs.

### Qu'est-ce que l'Arduino Nano ?

C'est une carte de microcontrôleur compacte, développée par Arduino.

Elle offre les mêmes fonctionnalités que l'Arduino Uno, mais dans un format beaucoup plus petit (environ 45 mm x 18 mm).

Sa petite taille la rend idéale pour les prototypes sur platine d'expérimentation (breadboard-friendly) et pour les systèmes embarqués ou les projets où l'espace est limité.

### Spécifications Techniques Clés (Version Classique ATmega328P)

Caractéristique	Spécification	Note
Microcontrôleur	ATmega328P	Le "cerveau" de la carte.
Tension de fonctionnement	5V	Tension standard pour les signaux d'E/S.
Tension d'entrée (recommandée)	7V – 12V	Via la broche VIN (non régulée).
Vitesse d'horloge	16 MHz	Détermine la vitesse d'exécution des instructions.
Mémoire Flash	32 KB	Pour stocker le programme (Sketch).
SRAM	2 KB	Mémoire vive utilisée pendant l'exécution.
EEPROM	1 KB	Stockage non volatile pour les données persistantes.
Broches numériques E/S	14 (dont 6 PWM)	Utilisées pour les signaux ON/OFF ou PWM.
Broches d'entrée analogique	8 (A0 à A7)	Pour lire les signaux analogiques (ex: capteurs).
Connecteur USB	Mini-USB Type B	Utilisé pour l'alimentation, la programmation et la communication série.
Courant par broche E/S	40 mA maximum	À ne pas dépasser pour ne pas endommager le microcontrôleur.

### Fonctionnalités et Connectivité

Entrées/Sorties (E/S)

Numériques (Digital): 14 broches qui peuvent être utilisées comme entrée (lecture d'un bouton) ou sortie (allumage d'une LED).

PWM (Modulation de largeur d'impulsion): 6 broches (marquées ~) pour simuler une sortie analogique (ex: faire varier la luminosité d'une LED ou contrôler un moteur).

Analogiques: 8 broches (A0-A7) pour lire des tensions variables (ex: potentiomètres, capteurs de lumière/température).

## Ton premier programme avec une Nano

Si tu débutes dans CLT, ce programme est fait pour toi !

Pour commencer, connecte le câble USB A - USB mini comme suit :

- Branche le USB A au PC
- Branche le USB mini à l'Arduino Nano

La LED "pow" (power = allumé) s'allume en rouge.

On va désormais passer à la programmation de la Nano.

Suis les étapes suivantes :

- Installe le logiciel [Arduino IDE](https://www.arduino.cc/en/software/)
- Mets le en langue française : File -> Preferences -> Language
 
![image](https://github.com/user-attachments/assets/d9098dfb-c433-46bb-a2c2-d6a24f96f09b)

- Crée un répertoire sur l'ordinateur que tu nommeras `nano_led`
- Dans ce répertoire, crée un fichier que tu nommeras `nano_led.ino`. Il est important de respecter le nommage car le nom du fichier doit être identique au nom du répertoire
- Copie le [contenu](nano_led.ino) et colle le dans ton fichier `nano_led.ino`
- Sélectionne la carte "inconnue"
- Indique qu'il s'agit de la carte Nano - en saisissant Nano dans le champ de recherche

![image](https://github.com/user-attachments/assets/8fcdb339-7af8-4f92-884f-4306d65ba42c)

- Lance la compilation en cliquant sur le bouton "verifier" ![image](https://github.com/user-attachments/assets/6e62242d-ff1e-48c3-9f7f-68b8c2e13837)
- Une compilation réussie donne un message de ce type

```bash
Le croquis utilise 1222 octets (3%) de l'espace de stockage de programmes. Le maximum est de 30720 octets.
Les variables globales utilisent 9 octets (0%) de mémoire dynamique, ce qui laisse 2039 octets pour les variables locales. Le maximum est de 2048 octets.
```
- On va maintenant téléverser le logiciel sur l'Arduino Nano
- Après une petite attente, tu vas voir la LED nommée L clignoter !
- Peux-tu désormais modifier le clignotement de la LED en changeant le programme `nano_led.ino` ?

## Arduino IDE

Voilà une [présentation récapitulative](https://arduino.blaisepascal.fr/presentation/logiciel/) de l'IDE Arduino :

![IDE-Arduino-V2-1](https://github.com/user-attachments/assets/bbb2add5-ecb9-4ca9-902e-8e20e17445e4)
