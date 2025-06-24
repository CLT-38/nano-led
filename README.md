# nano-led

Si tu débutes dans CLT, ce programme est fait pour toi !

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
- Après une petite attente, tu vas voir la LED L clignoter
