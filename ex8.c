// Exercice 8 :
// Nous allons créer un petit jeu de type mastermind. Pour ceux qui ne connaissent pas, ce jeu de
// société se joue à deux, une des personne créé un code secret composé de 4 couleurs. Puis le 2em
// joueur doit découvrir cette combinaison. Vous pouvez retrouver les règles du jeu ici:
// https://www.regles-de-jeux.com/regle-du-mastermind/
// Nous allons simplifier un peu les règles pour ce TP.
// - Nous allons utiliser les initiales des couleurs pour lire la saisie utilisateur et stocker le code secret
// parmis ('R','V','B','J','O')
// - Le code sera constitué de 4 couleurs .
// - Le code ne sera pas choisi par un joueur mais écrit en dure dans le programme (ex {'R','V','B','J'}) -
// Le nombre maximal de tentatives via une constante
// 1- Créer les variables et constantes nécessaires au programme (code, saisie_utilisateur, ...). Créer un
// tableau de char de taille 4 qui contient le code a trouver en utilisant les initiales des couleurs
// suivantes ('R', 'V', 'B', 'J', 'O'). 2- Créer la boucle de jeu
// 2.1- Demander au joueur une combinaison de 4 caractères à la suite sans espace (attention, utiliser
// la commande "fflush(stdin);" avant le scanf pour ne pas risquer de lire des restes entrés au clavier).
// 2.2- Comparer les deux combinaisons et calculer le nombre de couleur bien placées.
// 3- Afficher le nombre de tentatives réalisés sur le nombre maximum de tentatives ainsi que le
// nombre de couleurs bien placées.
// 4- Gérer la fin de partie en cas de victoire (toutes les couleurs bien placées) ou cas de défaite
// (nombre de tentatives dépassés)