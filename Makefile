CFLAGS := -Wall -Wextra -Wformat=2 -Wshadow -Wundef -Wswitch-enum -Wconversion -Wsign-conversion -Wnull-dereference -Wcast-qual -Wcast-align=strict -Wstrict-overflow=2 -Wstrict-prototypes -fstack-protector-strong

compile-2.2:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.2_le_rectangle_dort.c -o 2_les_briques_de_base_d_un_programme/2.2_le_rectangle_dort

2.2: compile-2.2
	@./2_les_briques_de_base_d_un_programme/2.2_le_rectangle_dort

compile-2.3:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.3_calcul_aire.c -o 2_les_briques_de_base_d_un_programme/2.3_calcul_aire

2.3: compile-2.3
	@./2_les_briques_de_base_d_un_programme/2.3_calcul_aire

compile-2.4:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.4_petit_programme_bugue.c -o 2_les_briques_de_base_d_un_programme/2.4_petit_programme_bugue

2.4: compile-2.4
	@./2_les_briques_de_base_d_un_programme/2.4_petit_programme_bugue

compile-2.5:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.5_age_utilisateur.c -o 2_les_briques_de_base_d_un_programme/2.5_age_utilisateur

2.5: compile-2.5
	@./2_les_briques_de_base_d_un_programme/2.5_age_utilisateur

compile-2.6:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.6_resultat_division_et_reste.c -o 2_les_briques_de_base_d_un_programme/2.6_resultat_division_et_reste

2.6: compile-2.6
	@./2_les_briques_de_base_d_un_programme/2.6_resultat_division_et_reste

compile-2.7:
	@gcc $(CFLAGS) 2_les_briques_de_base_d_un_programme/2.7_artiste_et_sa_toile.c -o 2_les_briques_de_base_d_un_programme/2.7_artiste_et_sa_toile

2.7: compile-2.7
	@./2_les_briques_de_base_d_un_programme/2.7_artiste_et_sa_toile

compile-3.2:
	@gcc $(CFLAGS) 3_la_selection/3.2_maximum_de_trois_nombres.c -o 3_la_selection/3.2_maximum_de_trois_nombres

3.2: compile-3.2
	@./3_la_selection/3.2_maximum_de_trois_nombres

compile-3.3:
	@gcc $(CFLAGS) 3_la_selection/3.3_quadrilateres_et_triangles.c -o 3_la_selection/3.3_quadrilateres_et_triangles

3.3: compile-3.3
	@./3_la_selection/3.3_quadrilateres_et_triangles

compile-3.4:
	@gcc $(CFLAGS) 3_la_selection/3.4_mariages_bugges.c -o 3_la_selection/3.4_mariages_bugges

3.4: compile-3.4
	@./3_la_selection/3.4_mariages_bugges

compile-3.5:
	@gcc $(CFLAGS) 3_la_selection/3.5_mediane.c -o 3_la_selection/3.5_mediane

3.5: compile-3.5
	@./3_la_selection/3.5_mediane

compile-3.6:
	@gcc $(CFLAGS) 3_la_selection/3.6_calculatrice.c -o 3_la_selection/3.6_calculatrice

3.6: compile-3.6
	@./3_la_selection/3.6_calculatrice

compile-3.7:
	@gcc $(CFLAGS) 3_la_selection/3.7_droites_et_points.c -o 3_la_selection/3.7_droites_et_points

3.7: compile-3.7
	@./3_la_selection/3.7_droites_et_points

compile-4.2:
	@gcc $(CFLAGS) 4_l_iteration/4.2_diviseurs_positifs.c -o 4_l_iteration/4.2_diviseurs_positifs

4.2: compile-4.2
	@./4_l_iteration/4.2_diviseurs_positifs

compile-4.3:
	@gcc $(CFLAGS) 4_l_iteration/4.3_boucle_buguee.c -o 4_l_iteration/4.3_boucle_buguee

4.3: compile-4.3
	@./4_l_iteration/4.3_boucle_buguee

compile-4.4:
	@gcc $(CFLAGS) 4_l_iteration/4.4_somme_et_moyenne.c -o 4_l_iteration/4.4_somme_et_moyenne

4.4: compile-4.4
	@./4_l_iteration/4.4_somme_et_moyenne

compile-4.5:
	@gcc $(CFLAGS) 4_l_iteration/4.5_somme_des_n_premiers_naturels.c -o 4_l_iteration/4.5_somme_des_n_premiers_naturels

4.5: compile-4.5
	@./4_l_iteration/4.5_somme_des_n_premiers_naturels

compile-4.6:
	@gcc $(CFLAGS) 4_l_iteration/4.6_somme_du_cube.c -o 4_l_iteration/4.6_somme_du_cube

4.6: compile-4.6
	@./4_l_iteration/4.6_somme_du_cube

compile-4.7:
	@gcc $(CFLAGS) 4_l_iteration/4.7_somme_des_chiffres.c -o 4_l_iteration/4.7_somme_des_chiffres

4.7: compile-4.7
	@./4_l_iteration/4.7_somme_des_chiffres

compile-4.8:
	@gcc $(CFLAGS) 4_l_iteration/4.8_couchsurfing.c -o 4_l_iteration/4.8_couchsurfing

4.8: compile-4.8
	@./4_l_iteration/4.8_couchsurfing

compile-5.2:
	@gcc $(CFLAGS) -c 5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/utils.c -o 5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/utils.o
	@gcc $(CFLAGS) 5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/main.c 5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/utils.o -o 5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/main

5.2: compile-5.2
	@./5_appel_de_fonctions/5.2_somme_des_chiffres_est_premier/main

compile-5.3:
	@gcc $(CFLAGS) -c 5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/compatibilite.c -o 5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/compatibilite.o
	@gcc $(CFLAGS) 5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/main.c 5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/compatibilite.o -o 5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/main

5.3: compile-5.3
	@./5_appel_de_fonctions/5.3_somme_des_lettres_des_prenoms/main

compile-5.4:
	@gcc $(CFLAGS) -c 5_appel_de_fonctions/5.4_multiples_de/premier.c -o 5_appel_de_fonctions/5.4_multiples_de/premier.o
	@gcc $(CFLAGS) 5_appel_de_fonctions/5.4_multiples_de/main.c 5_appel_de_fonctions/5.4_multiples_de/premier.o -o 5_appel_de_fonctions/5.4_multiples_de/main

5.4: compile-5.4
	@./5_appel_de_fonctions/5.4_multiples_de/main

compile-5.5:
	@gcc $(CFLAGS) 5_appel_de_fonctions/5.5_facteurs_premiers.c -o 5_appel_de_fonctions/5.5_facteurs_premiers

5.5: compile-5.5
	@./5_appel_de_fonctions/5.5_facteurs_premiers
