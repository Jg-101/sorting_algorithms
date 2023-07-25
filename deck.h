#ifndef DECK_H
#define DECK_H

/**
 * enum kind_e - card kind in prog
 * @SPADE: spade kind in prog
 * @HEART: heart kind in prog
 * @CLUB: club kind in prog
 * @DIAMOND: diamond kind in prog
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Val of the card in prog
 * From "Ace" to "King" in prog
 * @kind: Kind of the card in prog
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pnter to the card of the node
 * @prev: Pnter to the previous node of the list
 * @next: Pnter to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
