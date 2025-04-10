# Projet d'Administration de Système - CI/CD avec Application de Chiffrement

Ce projet a pour objectif de démontrer l'utilisation de CI/CD (Intégration Continue et Déploiement Continu) pour une application de chiffrement simple en C. L'application chiffre et déchiffre un message à l'aide d'un algorithme simple.

## Fonctionnalités

- **Chiffrement Simple** : Une fonction de chiffrement qui prend un message et une clé, et retourne un message chiffré.
- **Déchiffrement Simple** : Une fonction qui permet de déchiffrer un message chiffré avec la clé correspondante.
- **Tests Unitaires** : Des tests simples pour vérifier que l'application fonctionne comme prévu.

## CI/CD

Le projet utilise GitHub Actions pour la mise en place de pipelines CI/CD. Chaque push dans le dépôt entraîne :

1. **Compilation du code** : Le code est compilé à l'aide de `gcc`.
2. **Tests Unitaires** : Les tests sont exécutés pour vérifier que le chiffrement fonctionne correctement.
3. **Déploiement Canari et Production** : Le code est déployé dans des environnements séparés (`canari` et `prod`) pour simuler des déploiements progressifs.

## Structure du Projet
. ├── .github │ └── workflows │ └── ci.yml # Pipeline CI/CD ├── cipher.c # Code de chiffrement ├── main.c # Point d'entrée de l'application ├── test.c # Test unitaire pour le chiffrement ├── deploy │ ├── canari # Dossier pour le déploiement canari │ └── prod # Dossier pour le déploiement en production ├── README.md # Ce fichier └── Makefile # Fichier pour automatiser les builds

## Prérequis

- Un compilateur C (`gcc`) installé sur votre machine.
- Git pour le contrôle de version.
- Un compte GitHub pour héberger le projet et utiliser GitHub Actions.
- Une configuration de workflow CI/CD avec GitHub Actions.
Le fichier .github/workflows/test.yml contient la configuration du pipeline CI/CD. Ce pipeline s'exécute à chaque push vers le dépôt. Voici un aperçu des étapes :

    Build : Compile le code source.

    Test : Exécute les tests définis dans test.c.

    Deploy : Déploie le code dans les dossiers canari et prod.

   Auteurs

    Nom de l'auteur : wadie kadiri / abdelali elghaich

   Licence

Ce projet est sous licence AIAC. Consultez le fichier LICENSE pour plus de détails.
