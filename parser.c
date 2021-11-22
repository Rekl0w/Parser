#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	char ch;
	FILE *fp;
	char dosya[1000];
	char dizi[1000];
	int i = 0;
	int boyut = 0;

	printf("Okumak istediginiz dosyanin ismini veya yolunu giriniz: ");
	scanf("%s", dosya);

	if ((fp = fopen(dosya, "r")) == NULL) {

		printf("Dosya acilamadi...\n");

	} else {

		printf("\nOkunan dosya icerigi:\n\n ");
		while(ch!= EOF) {

			ch=fgetc(fp);
			dizi[i]=ch;
			printf("%c", dizi[i]);
			i++;

		}
		i = 0;
		while(dizi[i] != NULL) {
			boyut++;
			i++;
		}

		printf("\n\nHarf harf tokenize edilmis hali:\n\n ");

		for(i=0; i<boyut-1; i++) {

			printf("%c,", dizi[i]);
		}

		printf("\n\nKelime kelime tokenize edilmis hali:\n\n ");

		for(i=0; i<boyut-1; i++) {
			if(dizi[i]=='i') {
				printf("%c", dizi[i]);

			} else if(dizi[i]=='f') {
				printf("%c,", dizi[i]);

			} else if(dizi[i]=='e') {
				if(dizi[i+1]=='{') {
					printf("%c,", dizi[i]);
				} else {
					printf("%c", dizi[i]);
				}

			} else if(dizi[i]=='l') {
				printf("%c", dizi[i]);

			} else if(dizi[i]=='s') {
				printf("%c", dizi[i]);

			} else if(dizi[i]==' ') {
				printf(",%c", dizi[i]);

			} else {
				printf("%c,", dizi[i]);
			}

		}
		printf("\n\nGramer'e uygunluk: \n\n");
		i = 0;

		if(dizi[i]=='i') {
			i++;

			if(dizi[i]=='f') {
				i++;

				if(dizi[i]=='(') {
					i++;

					if(dizi[i]=='A' || 'B' || 'C' || 'D') {
						i++;

						if(dizi[i]=='<' || '>' || '=') {
							i++;

							if(dizi[i]=='A' ||'B'|| 'C' || 'D') {
								i++;

								if(dizi[i]==')') {
									i++;

									if(dizi[i]=='{') {
										i++;
										if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
											i++;

											if(dizi[i]=='<' || '>' || '=') {
												i++;

												if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
													i++;

													if(dizi[i]=='}') {
														i++;
														if(dizi[i]=='e') {
															i++;

															if(dizi[i]=='l') {
																i++;

																if(dizi[i]=='s') {
																	i++;

																	if(dizi[i]=='e') {
																		i++;

																		if(dizi[i]==' ') {
																			i++;

																			if(dizi[i]=='i') {
																				i++;

																				if(dizi[i]=='f') {
																					i++;

																					if(dizi[i]=='(') {
																						i++;

																						if(dizi[i]=='A' ||dizi[i]== 'B' ||dizi[i]==  'C' ||dizi[i]==  'D') {
																							i++;

																							if(dizi[i]=='<' || '>' || '=') {
																								i++;

																								if(dizi[i]=='A' ||'B'|| 'C' || 'D') {
																									i++;

																									if(dizi[i]==')') {
																										i++;

																										if(dizi[i]=='{') {
																											i++;

																											if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																												i++;

																												if(dizi[i]=='<' || '>' || '=') {
																													i++;

																													if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																														i++;

																														if(dizi[i]=='}') {
																															i++;
																															if(dizi[i]=='e') {
																																i++;
																																if(dizi[i]=='l') {
																																	i++;
																																	if(dizi[i]=='s') {
																																		i++;
																																		if(dizi[i]=='e') {
																																			i++;
																																			if(dizi[i]=='{') {
																																				i++;

																																				if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																																					i++;

																																					if(dizi[i]=='<' || '>' || '=') {
																																						i++;

																																						if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																																							i++;

																																							if(dizi[i]=='}') {
																																								i=i+2;

																																								if(dizi[i] != NULL ) {
																																									printf("Bu dosya gramer'e uygun degildir.");

																																								} else {
																																									printf("Bu dosya gramer'e uygundur.");
																																								}
																																							} else {
																																								printf("Bu dosya gramer'e uygun degildir.");
																																							}
																																						} else {
																																							printf("Bu dosya gramer'e uygun degildir.");
																																						}
																																					} else {
																																						printf("Bu dosya gramer'e uygun degildir.");
																																					}
																																				} else {
																																					printf("Bu dosya gramer'e uygun degildir.");
																																				}
																																			} else {
																																				printf("Bu dosya gramer'e uygun degildir.");
																																			}
																																		} else {
																																			printf("Bu dosya gramer'e uygun degildir.");
																																		}
																																	} else {
																																		printf("Bu dosya gramer'e uygun degildir.");
																																	}
																																} else {
																																	printf("Bu dosya gramer'e uygun degildir.");
																																}
																															} else if(dizi[i+1]==NULL) {
																																printf("Bu dosya gramer'e uygundur.");
																															} else {
																																printf("Bu dosya gramer'e uygun degildir.");
																															}
																														} else {
																															printf("Bu dosya gramer'e uygun degildir.");
																														}
																													} else {
																														printf("Bu dosya gramer'e uygun degildir.");
																													}
																												} else {
																													printf("Bu dosya gramer'e uygun degildir.");
																												}
																											} else {
																												printf("Bu dosya gramer'e uygun degildir.");
																											}
																										} else {
																											printf("Bu dosya gramer'e uygun degildir.");
																										}
																									} else {
																										printf("Bu dosya gramer'e uygun degildir.");
																									}
																								} else {
																									printf("Bu dosya gramer'e uygun degildir.");
																								}
																							} else {
																								printf("Bu dosya gramer'e uygun degildir.");
																							}
																						} else {
																							printf("Bu dosya gramer'e uygun degildir.");
																						}
																					} else {
																						printf("Bu dosya gramer'e uygun degildir.");
																					}
																				} else {
																					printf("Bu dosya gramer'e uygun degildir.");
																				}
																			} else {
																				printf("Bu dosya gramer'e uygun degildir.");
																			}

																		} else if(dizi[i]=='{') {
																			i++;

																			if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																				i++;

																				if(dizi[i]=='<' || '>' || '=') {
																					i++;

																					if(dizi[i]=='A' || 'B'|| 'C' || 'D') {
																						i++;

																						if(dizi[i]=='}') {
																							i=i+2;

																							if(dizi[i] != NULL ) {
																								printf("Bu dosya gramer'e uygun degildir.");

																							} else {
																								printf("Bu dosya gramer'e uygundur.");
																							}
																						} else {
																							printf("Bu dosya gramer'e uygun degildir.");
																						}
																					} else {
																						printf("Bu dosya gramer'e uygun degildir.");
																					}
																				} else {
																					printf("Bu dosya gramer'e uygun degildir.");
																				}
																			} else {
																				printf("Bu dosya gramer'e uygun degildir.");
																			}
																		} else {
																			printf("Bu dosya gramer'e uygun degildir.");
																		}
																	} else {
																		printf("Bu dosya gramer'e uygun degildir.");
																	}
																} else {
																	printf("Bu dosya gramer'e uygun degildir.");
																}
															} else {
																printf("Bu dosya gramer'e uygun degildir.");
															}

														} else if(dizi[i+2]==NULL) {
															printf("Bu dosya gramer'e uygundur.");
														} else {
															printf("Bu dosya gramer'e uygun degildir.");
														}

													} else {
														printf("Bu dosya gramer'e uygun degildir.");
													}
												} else {
													printf("Bu dosya gramer'e uygun degildir.");
												}
											} else {
												printf("Bu dosya gramer'e uygun degildir.");
											}
										} else {
											printf("Bu dosya gramer'e uygun degildir.");
										}
									} else {
										printf("Bu dosya gramer'e uygun degildir.");
									}
								} else {
									printf("Bu dosya gramer'e uygun degildir.");
								}
							} else {
								printf("Bu dosya gramer'e uygun degildir.");
							}
						} else {
							printf("Bu dosya gramer'e uygun degildir.");
						}
					} else {
						printf("Bu dosya gramer'e uygun degildir.");
					}
				} else {
					printf("Bu dosya gramer'e uygun degildir.");
				}
			} else {
				printf("Bu dosya gramer'e uygun degildir.");
			}
		} else {
			printf("Bu dosya gramer'e uygun degildir.");
		}
	}

	return 0;
}
