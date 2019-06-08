#include <iostream>

#include "libbolt.h"
#include "ChannelToken.h"
#include "PublicKey.h"
#include "PublicParams.h"
#include "Wallet.h"
#include "ChannelClosure.h"

int main()
{
    // Testing the validate channel open rust functionality

    // std::string x = "[[3,57,194,144,135,110,163,182,35,213,188,149,61,173,116,213,111,211,127,132,12,49,29,249,63,164,255,128,237,122,122,250],[47,197,153,89,35,28,236,71,233,146,254,194,211,208,146,152,208,30,74,147,115,64,57,141,31,199,112,188,113,193,196,232],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50],[24,79,61,24,253,183,252,253,186,39,65,174,36,49,35,125,138,69,241,75,91,12,141,247,191,173,213,219,246,133,136,217]]";

    // assert(validate_channel_open(cm_csp.c_str(), x.c_str()));

    // std::cout << "Validate Channel Open Successful" << std::endl;

    // std::string rc_c = "{\"message\":{\"msgtype\":\"refundToken\",\"wpk\":[3,108,79,169,238,98,15,205,191,239,241,150,119,148,90,203,86,252,237,149,89,7,247,192,212,155,193,140,185,96,29,57,89],\"balance\":55,\"r\":null,\"rt\":null},\"signature\":{\"a\":[4,5,142,169,217,62,3,199,143,201,139,153,125,216,94,196,221,70,207,13,163,53,70,170,99,147,174,195,168,232,78,194,59,247,246,7,91,253,123,72,105,41,235,72,196,201,36,245,255,57,71,24,28,116,194,166,119,82,165,119,2,142,119,180,197,3,67,163,240,182,166,26,153,166,62,37,214,150,14,201,60,140,130,123,140,163,214,99,217,187,187,158,171,10,22,238,40,254,197,39,27,217,141,227,222,56,127,38,122,167,81,21,193,98,109,244,111,160,195,119,197,139,120,66,20,190,147,176,205],\"A\":[[4,2,91,149,133,222,23,20,110,96,126,120,36,211,163,65,117,191,26,82,232,14,118,172,247,230,150,101,122,56,71,98,190,227,238,181,7,244,151,212,167,132,193,192,223,117,100,178,122,98,10,201,32,48,117,229,39,94,171,34,91,68,176,162,202,8,22,99,186,5,146,203,96,146,194,159,49,232,88,178,0,219,46,51,60,160,37,176,49,200,104,82,244,22,171,89,187,96,236,195,58,215,71,230,22,214,106,59,7,196,200,182,132,220,15,132,57,240,151,108,25,198,167,6,67,47,36,248,140],[4,8,78,130,250,169,175,146,89,195,13,210,32,9,249,182,198,50,243,110,255,17,16,77,1,232,61,163,94,118,129,183,46,115,152,254,159,204,181,178,21,20,88,35,174,62,164,174,218,45,33,254,178,164,243,247,19,128,215,60,25,34,46,180,217,5,39,207,214,90,204,138,61,9,202,169,118,104,24,51,241,132,125,70,113,132,98,204,185,212,217,54,4,92,254,106,224,99,131,129,249,250,65,148,17,212,45,21,152,203,240,218,53,50,221,99,162,83,10,162,189,110,226,75,148,3,101,123,193]],\"b\":[4,1,134,135,212,216,228,229,23,253,60,1,142,26,103,184,34,184,115,145,222,50,223,65,91,183,1,149,68,78,117,149,120,62,153,255,54,247,65,151,16,56,142,135,193,190,59,98,66,82,233,127,141,103,14,51,123,90,137,117,99,181,12,160,63,4,83,6,164,10,23,114,153,21,140,149,199,192,130,159,237,150,87,44,109,126,57,15,137,238,152,233,242,64,127,226,202,181,96,57,142,166,2,77,15,207,153,57,9,202,71,61,182,105,112,78,6,92,76,25,38,192,145,32,22,77,12,6,221],\"B\":[[4,7,121,196,34,23,36,149,205,231,235,206,43,11,194,215,204,79,43,14,178,97,46,91,219,200,35,57,18,0,136,106,114,69,75,147,255,45,220,70,186,89,27,7,91,187,45,10,218,106,18,175,185,119,187,125,0,7,48,142,130,25,227,146,40,7,31,113,75,206,134,81,255,127,164,0,131,39,89,90,25,119,162,105,181,138,144,44,132,214,236,52,222,104,93,102,24,74,95,120,62,247,171,143,81,237,195,111,50,91,233,124,183,45,106,230,54,196,105,139,215,208,153,132,126,173,116,144,127],[4,1,138,202,227,92,118,155,3,128,147,248,77,130,166,161,112,142,247,92,154,226,83,41,228,89,8,189,250,2,39,111,104,54,0,208,112,35,80,232,33,28,212,12,154,197,179,190,72,51,71,224,76,155,169,246,181,133,37,86,208,142,131,121,224,1,39,18,19,165,221,56,64,251,79,227,154,93,13,226,79,119,46,42,169,63,46,229,195,60,117,66,60,60,28,37,161,168,177,37,72,138,25,8,237,80,233,209,210,165,181,118,197,129,23,77,11,117,190,176,38,53,48,2,33,211,24,242,31]],\"c\":[4,1,96,179,188,105,157,175,152,101,255,91,199,136,105,157,237,98,143,215,73,178,116,82,216,20,70,6,79,254,100,217,251,179,41,195,60,2,138,69,87,79,6,12,94,175,81,187,227,125,177,91,107,38,148,175,84,217,25,189,177,42,64,23,102,6,26,182,123,162,220,55,168,5,94,132,123,168,109,43,162,22,177,113,211,194,116,23,49,37,97,33,182,174,198,247,114,163,28,211,199,233,101,174,211,233,142,100,209,222,152,179,134,255,11,189,132,248,160,35,121,123,151,166,27,226,241,242,44]}}";

    // // DONE
    // std::string pk_m = "{\"X\":[4,11,212,237,26,243,240,138,8,177,209,226,107,248,36,201,223,126,56,194,246,160,2,147,28,79,38,238,161,106,85,209,85,32,162,79,255,213,15,35,214,217,129,81,129,91,115,152,145,55,199,182,20,136,217,59,146,221,142,172,3,66,134,147,170],\"Y\":[4,13,143,248,55,31,110,150,169,97,222,5,62,113,117,110,224,148,76,164,73,197,211,222,97,116,142,84,241,124,135,5,52,3,255,73,76,91,182,83,193,49,188,214,60,8,232,98,185,9,92,164,89,94,252,123,26,179,220,245,131,91,73,108,177],\"Z\":[[4,11,195,77,142,142,41,122,88,140,236,130,168,59,251,84,31,236,241,241,36,211,109,185,12,231,47,158,229,67,34,88,12,39,191,42,236,216,87,207,79,91,101,236,189,82,246,220,228,99,185,171,133,230,80,73,17,230,182,72,184,122,199,84,211],[4,12,198,224,37,137,88,183,146,90,41,137,78,238,122,208,136,246,129,131,219,234,20,123,180,166,91,155,58,170,215,192,218,44,254,23,209,164,165,4,123,0,123,10,91,170,91,69,157,107,196,66,201,137,211,251,32,25,163,198,219,155,125,22,179],[4,15,48,5,87,171,60,247,234,141,11,124,141,166,201,160,205,212,161,227,62,113,70,211,4,115,23,199,63,222,2,146,83,43,76,129,95,89,89,170,101,128,13,118,138,203,163,60,92,18,78,72,0,57,175,14,170,72,46,52,14,46,199,9,228],[4,15,81,170,186,165,58,163,108,57,67,10,24,204,99,8,62,86,242,34,182,45,4,158,249,46,132,231,213,34,177,40,220,36,42,7,153,234,162,79,245,94,105,243,66,116,87,97,128,209,136,194,178,4,45,226,135,27,166,6,82,182,10,31,89]],\"Z2\":[[4,1,46,225,176,211,182,101,246,158,220,186,80,190,22,147,66,139,118,254,254,17,230,201,250,11,103,141,131,177,214,254,43,111,43,150,174,130,34,45,223,46,231,191,97,78,227,180,236,194,27,12,100,3,237,236,120,242,212,59,103,231,59,24,47,7,79,230,192,171,2,165,91,123,154,145,108,42,73,34,150,104,46,183,190,232,59,139,109,122,57,105,50,188,115,33,174,186,249,19,128,219,214,31,144,94,166,71,121,69,8,82,148,105,100,196,15,171,168,99,0,126,35,150,39,2,91,83,22],[4,8,78,227,114,68,33,144,142,20,114,63,203,228,156,104,239,206,153,172,17,48,5,235,24,164,206,3,83,181,254,105,136,141,95,30,167,26,46,250,241,218,128,86,33,214,50,103,153,225,23,235,40,55,152,215,101,21,254,108,23,105,181,249,157,0,12,106,4,151,137,74,249,161,172,215,177,91,99,27,19,134,238,223,82,77,237,175,163,192,210,149,147,155,164,23,226,253,42,10,133,16,8,242,235,242,231,22,46,216,226,84,72,125,74,153,145,191,239,39,36,55,10,128,17,171,149,179,99],[4,0,167,34,129,220,171,64,129,108,37,106,9,107,130,228,139,78,182,207,43,19,83,212,167,152,23,125,148,146,143,220,197,44,187,131,234,16,230,110,92,244,50,162,114,155,31,136,44,41,98,149,233,135,228,224,82,225,12,182,94,19,26,244,153,3,217,90,143,29,46,9,64,52,232,149,193,11,214,196,38,165,120,205,218,82,221,70,15,109,68,213,233,27,7,215,81,155,126,31,154,121,19,2,25,156,11,89,40,36,69,231,165,29,123,87,158,166,105,242,34,179,39,142,164,251,93,124,109],[4,3,175,119,174,99,244,192,184,229,87,231,64,87,171,19,95,228,179,203,178,92,176,14,242,131,251,226,199,36,180,69,241,217,63,95,210,234,3,122,32,42,154,9,87,131,222,86,49,92,62,220,24,147,3,192,114,160,93,120,111,98,32,93,6,7,65,19,23,182,23,36,124,46,87,2,67,156,193,176,128,111,33,236,84,176,125,1,193,175,138,250,241,46,157,154,183,41,254,210,154,224,103,92,236,12,179,190,7,242,165,127,79,250,119,95,220,93,81,148,113,191,107,3,150,200,72,91,87]],\"W\":[[4,22,229,244,131,241,7,130,217,228,193,167,191,168,98,145,15,160,159,82,185,195,131,238,27,80,18,176,171,183,83,100,161,38,213,179,117,33,5,124,233,163,140,96,192,172,252,185,17,99,234,176,99,91,236,122,230,13,126,73,120,240,30,70,25],[4,40,162,110,228,225,44,134,41,29,218,120,144,45,213,165,83,15,176,195,38,213,88,99,140,122,55,32,237,117,184,43,90,12,158,169,51,215,128,37,18,183,220,252,176,51,125,177,8,246,43,193,6,148,192,195,198,254,229,38,165,21,107,128,50],[4,39,73,110,208,252,249,11,106,99,70,177,105,156,130,115,164,41,223,213,248,116,43,30,136,82,15,27,77,151,40,128,155,34,15,207,216,16,38,213,222,237,233,7,181,175,173,3,21,134,201,81,83,124,51,130,144,30,159,102,158,106,14,198,125],[4,26,117,67,67,125,46,218,51,255,20,59,59,42,20,73,41,220,198,192,5,39,45,207,3,31,170,124,89,40,140,22,123,20,125,19,152,203,241,176,5,72,141,50,252,110,67,110,119,29,229,76,136,104,103,0,82,162,76,161,153,208,225,242,125]]}";

    // assert(validate_channel_close(pp.c_str(), rc_c.c_str(), pk_m.c_str()));

    // std::cout << "Validate Channel Close Successful" << std::endl;



    //Channel Token

    std::string channel_token = "05810405c5562fb520201b61b27a4a1328276535238bd05c48045c90fe4e336b5eab761cbd8a2b018298d1e1842580250aa412b3c3e745282b6fc1d89332572d2bcc110785dde055dd35d5bb91fa43ed4fcf3f69f8051134f0f738a40e3480be301b50b5487f5067665fd9272037fddc9029d60ca694d9340422c5cecc46822b91050d0405a2eb579382919cb178376fbec679af6720cf67e744d93fe43cdf02ba412bc1041f579f2c29c6975e0039d0b98912fcbca4af11b9e997da33f50a84dacc470306dd8a90c94d1130592f3e7d87db7e14b9295ecc9edb2aca593b00ceaa0d00b09a7ac8401ab90bdadd7fd3cf6b9cbdaa91f651668cc6adc65b8ebeece32762bc0406a6e14af00d9dc61117d7f07c2021a3422ac09a8c371377fcb4ea2fe8604a4219c2963c3f2f60c56b3dfab46e03e6917e69026270c5d4b7c533d069b63b3ccb085b141dccd23c3ef76cfcd928bc2a892d28f55e19aea980e4480282e72a5484f9453bea8aade1a3c1cc9711a01bf2c415e9179b7869e059192cad231ae867ad0406b08e977b847a5a887a0ec6e3cd0e95400f011c26e055c9cf941dbc157fb301a0e9e2c369fa744fb8fabf27a2ad559132cb026dc2dc8ba13dc0207d501cd00f042029e9d6f977c8ab6bca652c5e7311bf310f4235e24fce1237e98e42b7d7ca97c149b42c5969f42577566414e574a39cde9be6106a0f706bfe20a9801c592e0402e16db2c17416e48641eb9dff678e252df7739d5d8fa57a90892f269c4dc0bd6dc1a8edb21ce89c19aca06f76d85314b6206d7fa4c805068015fc0511064d3304a6e87378912de1c173adf3922407abec3664cb03e60d53e390ac57bf8b381a6b63c5d23d4d41e17cfe27628328d9c4af9215baddf6ed082f821a9e6344f1718104054e6c0db00bb143aee9fce0f28ba16f554fb5388675059fbe6318ea86645b78814dde89f36a1123e3f77412b8164b3f90c254f38352997c4d35359bd8cd65e201a10de92a7e1639ce4daa6b5bd2f1ba27dc9cb8dc98a2cd04e4c8096c9432d173e65d3eef70b530daca876d836abe5f4bd037f3bc2275529cbe3e3661ea8aac201ed26d3ca410cf9522908b2b2c204c393f2cf98f78a13ec258f8cf81976f52db";

    ChannelToken token;

    assert(token.fromHex(channel_token));

    std::cout << token.toJson() << std::endl;

    ChannelToken token_from_json;

    assert(token_from_json.fromJson(token.toJson()));

    std::cout << token_from_json.toJson() << std::endl;

    //Public Key

    std::string public_key = "4104131f86dc3cc0f088736f2d1a00e3a812d448a90bc1c5689797a109628764f1c21b64ff783a2b60f4b68e281a947e04a70e38305d1c266badb966189fb9c27ae84104057639b31850fef002f1ea152cdd6c01cfa70fa4c92e1a7a27d1799814383bdf2c96c0f3c0fec4d802f8b658608cd7e0bfd28acb5814412f705eeea209f1bd330441042304ac9deac1fa328ad7080b06efa1a65cab43d20b6b0aa25d999a70f910b8a80c52a226c010c6a5095c2e69f4c79b8740c75c80bd7c636a3a00f4ebbd31d472042fdd8f24a1ec8a02bf658e830508a62ec8ad6fa3df52af4424587742ada8ffa419c081e1274758dc08568b1b7aae5f0bdb5fef04ed8b317063f57978414eb9db04222327bdfb69cb29669bafa50e7b9831225e3e053bbc77f228bc002a2749c5fe179c726c71fa5b6db248ea5228a0b6a6f143cf201b7f8c0ca48ab937be364f850422561e2dada073cffc6cd73115fd42acc9ad82e524f0559a5e795a25f555aa9328128057ff6a8c678926b530a185406bd2f67c70d8c983b582a46473ce16492c04810405a2eb579382919cb178376fbec679af6720cf67e744d93fe43cdf02ba412bc1041f579f2c29c6975e0039d0b98912fcbca4af11b9e997da33f50a84dacc470306dd8a90c94d1130592f3e7d87db7e14b9295ecc9edb2aca593b00ceaa0d00b09a7ac8401ab90bdadd7fd3cf6b9cbdaa91f651668cc6adc65b8ebeece32762bc0406a6e14af00d9dc61117d7f07c2021a3422ac09a8c371377fcb4ea2fe8604a4219c2963c3f2f60c56b3dfab46e03e6917e69026270c5d4b7c533d069b63b3ccb085b141dccd23c3ef76cfcd928bc2a892d28f55e19aea980e4480282e72a5484f9453bea8aade1a3c1cc9711a01bf2c415e9179b7869e059192cad231ae867ad0406b08e977b847a5a887a0ec6e3cd0e95400f011c26e055c9cf941dbc157fb301a0e9e2c369fa744fb8fabf27a2ad559132cb026dc2dc8ba13dc0207d501cd00f042029e9d6f977c8ab6bca652c5e7311bf310f4235e24fce1237e98e42b7d7ca97c149b42c5969f42577566414e574a39cde9be6106a0f706bfe20a9801c592e0402e16db2c17416e48641eb9dff678e252df7739d5d8fa57a90892f269c4dc0bd6dc1a8edb21ce89c19aca06f76d85314b6206d7fa4c805068015fc0511064d3304a6e87378912de1c173adf3922407abec3664cb03e60d53e390ac57bf8b381a6b63c5d23d4d41e17cfe27628328d9c4af9215baddf6ed082f821a9e6344f1710441041dc2e3d4173966de7d1ed5e27bc22fe16c76e5608cee95596ebb60c3f02f6bc90a065eafd105538555a1f4f29fd90ce54472145df3e80e9b997fd98eebcaf3dd042af359d72df9e9652b3032d431810625ba80429d24fb67e878606b5ed890dc0010630af8ee84335853328b988574d48b331db1ba5509bb006b63251ad38548500428c058139c2ef503b78bd7f43d41a3dcd85ee081500a324ceafb05271b4132641a197b773c007a2e5a05b1c241bdbd36bf837bf41f9c53bea7259e2384e31d080427f5183459d41bcd52035895b2a80b327a14b644dfdda3eecffcc0d1d4143bb92453076c1a93e220ee5661d2971d5bdd3c57e3f8c64297823d0f4a0f8968e017";

    PublicKey pk_m;

    assert(pk_m.fromHex(public_key));

    std::cout << pk_m.toJson() << std::endl;

    PublicKey pk_m_from_json;

    assert(pk_m_from_json.fromJson(pk_m.toJson()));

    std::cout << pk_m_from_json.toJson() << std::endl;

    //PP

    std::string pp_string = "41042b92f850665c7ae404f048e4b606aa188e2fcd911aa081dcd219691da20914c00cbee75ed0de801b1e20166c40964aef1752c4668e4ca7d315f5224f9dbe985f810405c5562fb520201b61b27a4a1328276535238bd05c48045c90fe4e336b5eab761cbd8a2b018298d1e1842580250aa412b3c3e745282b6fc1d89332572d2bcc110785dde055dd35d5bb91fa43ed4fcf3f69f8051134f0f738a40e3480be301b50b5487f5067665fd9272037fddc9029d60ca694d9340422c5cecc46822b91050d";

    PublicParams pp;

    assert(pp.fromHex(pp_string));

    std::cout << pp.toJson() << std::endl;

    PublicParams pp_from_json;

    assert(pp_from_json.fromJson(pp.toJson()));

    std::cout << pp_from_json.toJson() << std::endl;

    // Wallet

    std::string x = "[[3,57,194,144,135,110,163,182,35,213,188,149,61,173,116,213,111,211,127,132,12,49,29,249,63,164,255,128,237,122,122,250],[47,197,153,89,35,28,236,71,233,146,254,194,211,208,146,152,208,30,74,147,115,64,57,141,31,199,112,188,113,193,196,232],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50],[24,79,61,24,253,183,252,253,186,39,65,174,36,49,35,125,138,69,241,75,91,12,141,247,191,173,213,219,246,133,136,217]]";

    Wallet w;

    assert(w.fromJson(x));

    std::cout << w.toHex() << std::endl;

    std::cout << w.toJson() << std::endl;    

    std::string channel_closure = "810407e742f729215b4aa2456b78aeb502f8153442aa64ebec0f5a468e15bf2c5f2284ede6da4001b4d941745be42985d811d4d435c9d6f09489a18caf9a8ec1fd290125b1085d96535351662a35e09165cbdeb146cc6a49f9772332cbd4c24314d6571ac1f798c2bc2b4824d0bb03396f1be04b84ad6a7a51cc29833e8501cc3a98810407537ad2085a8c5a30825414f494360b81b773f31a4a646eee07725cfd9b12a70593a40ecaa54bce6f7668f66373967dde8cd0d77298706175d2f2130899e2fa06072488da670045ebf4b63cf4a8a8691fe26df666f278baa82aebbcd480c753e60363e94736bd7fdc9963afe30c60aec03e198ef7c7a6a8d2125db178abf772810403aa86d5f86a3b6a65800ae7568d39b69591ce855a435d7f5e9b1d3975664e605c70e4289d3a9ba7479c190b4ceb924b35be672d0ec6bb806b6faa7fc658dd9101da26bdfd5c19b95377b3edf62e24164650b32bb76db9173c21e59264d55b561cd89daa2083d4591205a250b742bc116bb555fe2d0837df998c6813f022dbfd048104062caa84a96615f0e1c11b37fe9919b76fb2ce108b88d37493df0f305cb52055105021231af48f935132252158203f85c075dbc4e1009356263bc6d08318a08f07bc4eb2da837ee89ddf91ff0fac086b7b0338cf8a7b1f00bf138fd66da5f21317b506a152f9aaba519e2a3037318bdbaab41121508b83b22b1de0f6e4db7d4e04035247d98e1fd1b330d4ebb5ccac8f7743b4a1d5e4bfbe95cb5e62b4ee2268cc1f2ed510489a9163ec76206f73a990505fe1d2dc9e1368f7259e2e764477d76a07cbec4d14ce7c0d727484389e25545a29790ccbc57a3c77ad173587c3bec6e2ef09022bc375ec60d929e7358c8ac33394f22d4318bb9b0065eef3a76bfaef830408c4f122a13aa0f10a0831fcabffbf63de2d9209e209723ea26a32e671fabfdd1f35bac4fcdf7a47780fe687f17cb3563df2448bb1f00073b223ea19a3eb9b5901358222c0244e10dee16ff87fe3ad405b740e9e3580235bffccd2f25fed9894073c5d06f0e057fe47a4c44368c620021c9f36e338125b188ed5938c129f31e60401a2ea8625fc205c2f17ca9bd1473c95474d39d9e96107a0f61a1bb79ae9e517413b62f769e8e1afd66b6913f0307060400cfd82a1661c963810f2db3bebeb4c030a79b4531197b8663027e07348b04193419305093927b9cb3fff49be638a4b35a4424b74614e5fdb3ac2dd87654c60fb73e9e1ec6e2bdf5192ec4aa1581d4b04810406e45ea5e454d881c7ee2a343c880e1aa384c3889500d8339de474c8f704e844e48cad63823b3138a37c8395e1899b36697035ad8adb032eec90e1a6d131063e02c429ebe47f8578cc0a60bc7d59dffc3ce54c1d7fdae7f47838a32baee6951b6ca7ddb6ebcff21cbae42ab915eeccb86ebd720a91f8f9d304fd9ebc5f03fd65040427f35fe2449f1df1895bcb85fd5b48966edcf410be958ed3208503c593ae24b122a2db2fe8f6cbeca6fe760d8fece344e2c59ea21f5f8378ee426255fed66f03742c6af1e7ef82c2d980feee6ba262673a02d5eda8fb5d5d64c7396e9cdd108dbf3bf23bca77975a8dbfbfa7f50021f5a952bf294b45ad50ae079161fecb1a04034520aa85afbfab4be559a163a6c4b9b6fb0f9eb8eeac0915a5511d5715f24f9c5791041a9f9ac9de9a0e2bb43c957d3024bb2e894e6c838a0c3562c4cbe09f06962003038e15d2063779cdd70e3bd110eb1880c0ac97039855a9daa12d5f1ddcad1824c0b592c16b5fed522f445ad45ce7de8fc86e0c9b94189b4b51bea5b004025b30cada48b99cb79891bbe84c352d562319ef5712d66a84e08f44ff785131339d98c0a069e598d192d10a21c457edacedea23f618ddb37e63319674ed3f5400fc4ccdd8724d047bfd9565d5bd0dd8803fb3049a3541a427f760690f4feac4259b2a4a69e1f5471af6b7223a6ab407ca697fb9b5cae47e6e28bae6f412cf7a";

    ChannelClosure c;

    assert(c.fromHex(channel_closure));

    std::cout << c.toJson() << std::endl;

    ChannelClosure c_from_json;

    assert(c_from_json.fromJson(c.toJson()));

    std::cout << c_from_json.toJson() << std::endl;

    return 0;


}