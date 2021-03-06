use strict;
BEGIN {
    $ENV{STASIS_DIR} = '/home/sears/stasis';
}
use lib ($ENV{STASIS_DIR}."/lang/perl/");  # For Stasis.pm
push @INC, "$ENV{STASIS_DIR}/lang/perl/apache/";  # For StasisWeb::Web.pm

#use Inline (Config =>
#	    DIRECTORY => "$ENV{STASIS_DIR}/www-data/",
#    );
use Stasis "$ENV{STASIS_DIR}/www-data/";

# XXX Ideally, the rest of this would go in a post_config handler, but
# I can't get that to work...

my $data_dir = "$ENV{STASIS_DIR}/www-data/";

{
    my $d = `date`;
    chomp $d;
    warn "$d: Starting Stasis in $data_dir\n";
    chdir $data_dir
	|| die "Could not chdir to $data_dir, which I must own!";

    Stasis::Tinit();
    $d = `date`;
    chomp $d;
    warn "$d: Stasis recovery complete\n";
    my $xid = Stasis::Tbegin();
    if(Stasis::TrecordType($xid, Stasis::ROOT_RID()) == Stasis::INVALID_SLOT()) {
	$d = `date`;
	chomp $d;
	warn "$d: Bootstrapping new Stasis store.\n";

	Stasis::ThashCreate($xid);
    }
    Stasis::Tcommit($xid);

    $d = `date`;
    chomp $d;
    warn "$d: Stasis initialization complete.\n";
}

1;
