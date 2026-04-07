# QA Automation & AI Issue Triage (PFE)

## Présentation du Projet
Ce projet vise à automatiser le cycle de vie des tests QA en intégrant une intelligence artificielle pour le tri et l'analyse des signalements de bugs. L'objectif est de réduire le temps de réponse de l'équipe technique face à des incidents critiques.

## Architecture Technique
- **Frontend :** React 18 (Interface de monitoring des tests).
- **Backend :** Node.js & MongoDB (Gestion des rapports de tests).
- **Automation :** n8n (Orchestrateur de workflows).
- **IA :** Llama-3.3-70B via Groq (Moteur de décision de priorité).
- **CI/CD :** GitHub Actions pour le déclenchement des tests.

## Logique de Criticité (Critères de l'IA)
L'IA doit classifier les issues selon ces priorités :
1. **CRITICAL :** Arrêt total du service, faille de sécurité, ou impossibilité de se connecter/payer.
2. **HIGH :** Dysfonctionnement d'une fonctionnalité majeure (ex: ajout au panier impossible) sans contournement simple.
3. **MEDIUM :** Bug fonctionnel mineur ou dégradation de l'expérience utilisateur.
4. **LOW :** Problèmes cosmétiques, fautes de frappe, ou suggestions d'amélioration.
