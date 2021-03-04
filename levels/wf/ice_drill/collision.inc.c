const Collision ice_drill_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(14),
	COL_VERTEX(0, -200, -100),
	COL_VERTEX(0, 200, -100),
	COL_VERTEX(78, 200, -62),
	COL_VERTEX(78, -200, -62),
	COL_VERTEX(97, 200, 22),
	COL_VERTEX(97, -200, 22),
	COL_VERTEX(43, 200, 90),
	COL_VERTEX(43, -200, 90),
	COL_VERTEX(-43, 200, 90),
	COL_VERTEX(-43, -200, 90),
	COL_VERTEX(-97, 200, 22),
	COL_VERTEX(-97, -200, 22),
	COL_VERTEX(-78, 200, -62),
	COL_VERTEX(-78, -200, -62),
	COL_TRI_INIT(SURFACE_HARD_NOT_SLIPPERY, 24),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 8),
	COL_TRI(7, 8, 9),
	COL_TRI(9, 8, 10),
	COL_TRI(9, 10, 11),
	COL_TRI(4, 2, 1),
	COL_TRI(1, 12, 10),
	COL_TRI(10, 8, 6),
	COL_TRI(6, 4, 1),
	COL_TRI(1, 10, 6),
	COL_TRI(11, 10, 12),
	COL_TRI(11, 12, 13),
	COL_TRI(13, 12, 1),
	COL_TRI(13, 1, 0),
	COL_TRI(13, 0, 3),
	COL_TRI(3, 5, 7),
	COL_TRI(7, 9, 11),
	COL_TRI(11, 13, 3),
	COL_TRI(3, 7, 11),
	COL_TRI_STOP(),
	COL_END()
};